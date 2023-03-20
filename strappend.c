#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
char *strappend(char *des, char *source);
int main() 
{
     char *source = NULL;
     char *des = NULL;
     source = (char *) malloc (SIZE * sizeof(char));//dynamic memory allocation
     des = (char *) malloc (SIZE * sizeof(char));
     if (NULL == source && NULL == des) {
         printf("malloc failed!\n");
         exit(0);
     }
     printf("\nEnter source string:\n");
     if (NULL == (fgets(source, SIZE, stdin))) {
         printf("Fgets failed ");
     }
	 printf("\nEnter destination string:\n");
      if (NULL == (fgets(des, SIZE, stdin))) {
         printf("Fgets failed ");
     }
    *(source + (strlen(source)) - 1) = '\0';
    *(des + (strlen(des)) - 1 ) = '\0';
	strappend(des, source);
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
char *strappend(char *des, char *source)
{
   char *temp = des + strlen(des);//temp point to end of des
   while ( *source != '\0') {//appends source to des string
       	*temp++ = *source++;
       }
   *temp = '\0';
   return des;
}
