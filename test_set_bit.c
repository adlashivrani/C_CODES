#include<stdio.h>
#define test_set_bit(num, p) (num) = ((num) | (1 << ( p))) 
int main() 
{
	unsigned int num;
	unsigned int p;
	printf("\nEnter number: \n");
	scanf("%d", &num);
	printf("Binary representation of num:\n");
	for (int i = 1 << 7; i > 0; i = i / 2)
	{
		(num & i) ? printf("1") : printf("0");
	}
	printf("\nEnter position to set bit: \n");
	scanf("%d", &p);
	if ( num & (1 << p)) {
		printf("\nBit is set\n ");
	} else {
		printf("\nBit is not set\n ");
	}
	printf("\nThe Binary representation after setting bit: \n");
	unsigned int res = test_set_bit(num , p);
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(res & i) ? printf("1") : printf("0");
	}
	printf("\n");
	return 0;
}
	

