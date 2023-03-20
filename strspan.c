#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20

int strspan(char*, char*);

int main()
{
    char *str1 = NULL;
    char *str2 = NULL;
    str1 = (char *) malloc (SIZE * sizeof(char));
    str2 = (char *) malloc (SIZE * sizeof(char));
    if (NULL == str1 || NULL == str2) {
        printf("Malloc failed..!!!!");
        exit(0);
    }
    printf("Enter string1:\n");
    if (NULL == (fgets(str1, SIZE, stdin))) {
        printf("Error..!!");
    }
    printf("Enter string2:\n");
    if (NULL == (fgets(str2, SIZE, stdin))) {
        printf("Error..!!");
    }
    *(str1 + (strlen(str1) - 1)) = '\0';
    *(str2 + (strlen(str2) - 1)) = '\0';
    printf("After stringspan is:%d\n", strspan(str1, str2));
    free(str1);
    free(str2);
    str1 = NULL;
    str2 = NULL;
    return 0;
}

int strspan(char *str1, char *str2)
{
    int count = 0;
    char *temp = str2;
    while(*str1 != '\0') {
        while(*str2 != '\0') {
            if (*str1 == *str2) {
                count = count + 1;
                str2 = temp;
                break;//matching
             } else {
                str2++;
           }
        }
        str1++;
    }
    return count;
}
