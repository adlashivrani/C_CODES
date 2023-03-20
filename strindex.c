#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
int strindex(char *str, char c);
int main()
{	
    char *str = NULL;
    char c;
    str = (char *) malloc (SIZE * sizeof(char));//dynamic memory allocation
    if (NULL == str) {
        printf("malloc failed!\n");
        exit(0);
    }
    printf("\nEnter a string:\n");
    if (NULL == (fgets(str, SIZE, stdin))) {
        printf("Fgets failed ");
    }
	printf("Enter the char\n");
	scanf("%c", &c);
    int count = strindex(str, c);
	*(str + (strlen(str)) - 1) = '\0';
	printf("first index of char: %d",count);
    printf("\n");
    free(str);
    str = NULL;
    return 0;
}
int strindex(char *str, char c)
{
	int index = 0;
    while ( *str != c ) {
        *str++;
		index++;
       }
    return index;
}
