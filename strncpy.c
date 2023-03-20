#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
char *strncopy(char *des, char *source, int n);
int main()
{

     char *source = NULL;
     char *des = NULL;
	 int n = 5;
     source = (char *) malloc (SIZE * sizeof(char));//dynamic memory allocation
     des = (char *) malloc (SIZE * sizeof(char));
     if (NULL == source && NULL == des) {
         printf("malloc failed!\n");
         exit(0);
     }
     printf("\nEnter a string:\n");
     if (NULL == (fgets(source, SIZE, stdin))) {
         printf("Fgets failed ");
     }
	 //printf("Enter the number of characters to copy:\n");
	 //scanf("%d", &n);
     //scanf("%s", source);
     strncopy(des, source, n);
     *(source + (strlen(source)) - 1) = '\0';
     *(des + (strlen(des)) - 1 ) = '\0';
     printf("Destination string:");
     for ( int  i = 0; des[i] != '\0'; i++)\
     {
         printf("%c", des[i]);
     }
     printf("\n");
     free(source);
     free(des);
     source = NULL;
     des = NULL;
     return 0;
}

char *strncopy(char *des, char *source, int n)
{
    char *temp = des;
    while ( *source != '\0' && n--) {
    	*des++ = *source++;
    }
    *des = '\0';
	return temp;
}
