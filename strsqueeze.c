#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

char *strsqueeze(char *str);

int main()
{
    char *str = NULL;
    str = (char*) malloc(SIZE * sizeof(char));
    if (NULL == str) {
        printf("error memory is not allocated-\n");
        exit(0);
    }
    printf("enter the string in str-");
    fgets(str, SIZE, stdin);
    *(str + (strlen(str) - 1)) = '\0';
    if  (NULL == str) {
        printf("error fgets is NULL-\n");
    }
    printf("Squeezed string : %s\n", strsqueeze(str));
    return 0;
}

char *strsqueeze(char *str)
{
        char *ptr1 = str;
        char *ptr2 = str;
        while (*ptr1) {
                *ptr2 = *ptr1;
                 ptr1++;
                if (*ptr2 != *ptr1 || *ptr1 == '\0') {
                        ptr2++;
                }
       }
        *ptr2 = '\0';
        return str;
}
