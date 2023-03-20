#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
char *strtoken(char *str, char *delim);
int main()
{
    char *str = NULL;
    char *delim = NULL;
    str = (char *) malloc (SIZE * sizeof(char));//dynamic memory allocation
    delim = (char *) malloc (SIZE * sizeof(char));
    if (NULL == str && NULL == delim) {
        printf("malloc failed!\n");
        exit(0);
    }
    printf("\nEnter string:\n");
    if (NULL == (fgets(str, SIZE, stdin))) {
        printf("Fgets failed ");
    }
    printf("\nEnter delimiter:\n");
    if (NULL == (fgets(delim, SIZE, stdin))) {
        printf("Fgets failed ");
    }
    *(str + (strlen(str)) - 1) = '\0';
    *(delim + (strlen(delim)) - 1 ) = '\0';
    char *temp = strtoken(str, delim);
	printf("\nResultant:\n");
	while ( temp != NULL) {
		printf("%s\n", temp);
		temp = strtoken(NULL, delim);
	}	
    free(str);
    free(delim);
    str = NULL;
    delim = NULL;
    return 0;
}
char *strtoken(char *str, char *delim)
{
	static char *index;
	if ( str != NULL) {
		index = str;
	} else {
			str = index;
		}
	if ( *index == '\0') {
		return NULL;
	}
	while ( *index != '\0') {
		for (int i = 0; delim[i] != '\0'; i++) {
			if ( *index == delim[i]) {
				if ( index == str) {
					index++;
					str++;
				} else { 
						*index = '\0';
						break;
						}
					}
				}
		//return token
		if (*index == '\0') {
			index++;
			return str;
		}
		index++;
	}
	return str;
}
