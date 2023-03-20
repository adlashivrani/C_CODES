#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
char *strrev(char *);
int main()
{
    char *str = NULL;
	str = (char *) malloc (SIZE*sizeof(char));
    if (NULL == str) {
        printf("malloc failed!\n");
        exit(0);
    }
    printf("Enter a string:\n");
    if (NULL == (fgets(str, SIZE, stdin))) {
        printf("ERROR..!!");
    }
    *(str + (strlen(str)) - 1) = '\0';
    strrev(str);
    printf("Reverse string is:%s\n", str);
	free(str);
	str = NULL;
    return 0;
}
char *strrev(char *str)
{
    char *head = str;
	char *tail = str;
	if (str && *str) {
		while (*tail) tail++;
			tail--;
		while ( tail > head)
		{
			int ch = *tail;
			*tail-- = *head;
			*head++ = ch;
		}
	}
	return str;
}

