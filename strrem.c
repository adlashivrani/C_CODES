#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 50
char *strrem(char *str, char *sstr);
char* strstring(char* str, char* sstr);
int compare(char* str, char* sstr);
int main()
{
    char *str = NULL;
    char *sstr= NULL;
    str = (char *) malloc (SIZE * sizeof(char));//dynamic memory allocation
    sstr = (char *) malloc (SIZE * sizeof(char));
    if (NULL == str && NULL == sstr) {
        printf("malloc failed!\n");
        exit(0);
    }
    printf("\nEnter string:\n");
    if (NULL == (fgets(str, SIZE, stdin))) {
        printf("Fgets failed ");
    }
    printf("\nEnter sub string:\n");
    if (NULL == (fgets(sstr, SIZE, stdin))) {
        printf("Fgets failed ");
    }
    *(str + (strlen(str)) - 1) = '\0';
    *(sstr + (strlen(sstr)) - 1 ) = '\0';
    strrem(str, sstr);
	/*for ( int i = 0; str[i] != '\0'; i++)
	{ 
		printf("%c", str[i]);
	}*/
	printf("%s",str);
	printf("\n");
    free(str);
    free(sstr);
    str = NULL;
    sstr = NULL;
    return 0;
}
char *strrem(char *str, char *sstr)
{
	/*char *ptr1;
	char *ptr2;
	char *temp;
	do {
		ptr2 = sstr;
		ptr1 = str;
		while (*ptr1 && *ptr2 && *ptr1 == *ptr2) {
			ptr1++;
			ptr2++;
		}
		if ( !(*ptr2)) str = ptr1 - 1;
	 	else *temp++ = *str;
	} while (*str && *(++str));
	*temp = '\0';
	return temp;*/
	int i = 0;
	int ls = strlen(str);
	int lw = strlen(sstr);
	char *temp = str;
	while ( i < ls) {
		if (strstring(&str[i], sstr) == &str[i]) {//function gets called
			ls -= lw;
			for ( int j = i; j < ls; j++) {
				str[j] = str[j + lw];
			}
		} else i++;
	}
	str[i] = '\0';
	return temp;
}
//function to impement strstr() 
char* strstring(char* str, char* sstr) {
	while (*str != '\0') {
		if ( (*str == *sstr) && compare(str, sstr)) {
			return str;
		}
		str++;
	}
	return NULL;
}
//returns true if str and sstr are same
int compare(char* str, char* sstr) {
	while ( *str && *sstr) {
		if ( *str != *sstr) {
			return 0;
		}
		str++;
		sstr++;
	}
	return (*sstr == '\0');
}
