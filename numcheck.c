#include <stdio.h>

int check_binary(int);

int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d", &num);
	int res = check_binary(num);
	if (res == 1) {
		printf("\nGiven number is in binary formate\n");
	} else {
		printf("\nNot binary number\n");
	}
	return 0;
}

int check_binary(int num) 
{ 	
	int i;
	int res;
	int temp;
	for ( i = 0; i <= num; i++) {
		temp = num % 10;
		if ( temp == 1 || temp == 0) {
			num = num / 10;
		} else {
			return 0;
		}
	}
	return 1;
}
