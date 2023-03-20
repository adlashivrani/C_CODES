#include <stdio.h>
#define SIZE 10
int check_binary(char *);

int main()
{
	char num[SIZE];
    printf("Enter a string:\n");
   	scanf("%s", num);
    int res = check_binary(num);
    if (res == 1) {
    	printf("\nGiven string is in binary formate\n");
    } else {
        printf("\nNot binary number\n");
    }
    return 0;
}

int check_binary(char *num)
{
	int i;
    char *temp;
    for ( i = 0; num[i] != '\0'; i++) {
    	temp[i] = num[i];
    	if ( temp[i] == '1' || temp[i] == '0') {
    		continue;
        } else {
           	return 0;
        }
    }
    return 1;
}
