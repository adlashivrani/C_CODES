#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20

int strrot( char *str, char *rstr);

int main()
{
    char *str = NULL;
    char *rstr = NULL;
    str = (char *) malloc (SIZE * sizeof(char));//dynamic memory allocation
    rstr = (char *) malloc (SIZE * sizeof(char));
    if (NULL == str && NULL == rstr) {
        printf("malloc failed!\n");
        exit(0);
    }
    printf("\nEnter first string:\n");
    if (NULL == (fgets(str, SIZE, stdin))) {
        printf("Fgets failed ");
    }
    printf("\nEnter second string:\n");
    if (NULL == (fgets(rstr, SIZE, stdin))) {
        printf("Fgets failed ");
    }
    *(str + (strlen(str)) - 1) = '\0';
    *(rstr + (strlen(rstr)) - 1 ) = '\0';
    int res = strrot(str, rstr);
	if ( res > 0)
	{
		printf("Strings are rotations of each other");
	} else {
				printf("Strings are not rotations of each other:");
			}
    free(str);
    free(rstr);
    str = NULL;
    rstr = NULL;
    return 0;
}

int strrot(char *str, char *rstr)
{
 	int n = strlen(str);
	int pos;
	int i;
	int flag;
    if (n != strlen(rstr))
    {
       return -1;
    }
    for (pos = 0; pos < n; pos++)
    {
       for (i=0, flag = 0; i < n; i++)
       {
          if (rstr[(pos + i) % n] != str[i])
          {
            flag = 1;
            break;
          }
       }  
    	if (flag == 0)
    	{
      		return pos;
    	}
  	} 
    return -1;
}
