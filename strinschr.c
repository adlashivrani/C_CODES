#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20

char *strinschr(char *, const char, int );

int main ()
{
    char ch;
    int pos;
    char *str = NULL;
    str = (char*) malloc(SIZE * sizeof(char));//dynamic memory allocation
	if (NULL == str) {
            printf("\nERROR\n");
            exit(0);
    }
    printf("\nEnter a string:\n");
    fgets(str, SIZE, stdin);
    *(str + (strlen(str) - 1)) = '\0';
    if (NULL == str) {
        printf("\nError fgets is NULL\n");
     }
     printf("\nEnter a char:\n");
     scanf("%c", &ch);
     printf("\nenter the location to insert character:\n");
     scanf("%d", &pos);
     printf("\nResultant string: %s\n", strinschr(str, ch, pos));//function calling
     free(str);
     str = NULL;
     return 0;
}

char *strinschr(char *str, const char ch, int pos)
{
    int len = strlen(str);
    for (int i = len; i >= pos ; i--) {
          *(str + i) =  *(str + (i -1));
    }
    *(str + (pos -1)) = ch;
    return str;
}
