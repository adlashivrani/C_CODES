#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
int strpalin(char *);
int main()
{
    char *str = NULL;
    str = (char *) malloc (SIZE * sizeof(char));
    if (NULL == str) {
        printf( "Malloc failed");
    }
    printf("Enter a string:\n");
    if (NULL == (fgets(str, SIZE, stdin))){
        printf("fgets failed");
    }
    *(str + (strlen(str) - 1)) = '\0';
    if (strpalin(str) == 1) {
        printf("Palindrome");
    } else {
	    printf("Not palindrome");
	   }
	   return 0;
   free(str);
   str = NULL;
}
int strpalin(char *str)
{
    int index = 0;
    int len =  strlen(str) - 1;
    while (index <= len) {
        if (*(str + index) == *(str + len)) {
            index++;
            len--;
        } else {
            return 0;
      }
    }
    return 1;
}
