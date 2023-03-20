#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10

char *strcopy(char *des, char *source);
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
	printf("\nEnter a string:\n");
	if (NULL == (fgets(source, SIZE, stdin))) {
		printf("Fgets failed ");
	}
	//scanf("%s", source);
	strcopy(des, source);
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

char *strcopy(char *des, char *source)
{
	char *temp = des;
	while ( *source != '\0') {
		*des++ = *source++;
	   } 
	*des = '\0';
	return temp;
}


