#include<stdio.h>
unsigned int toggle_even_bits(unsigned int num);
unsigned int toggle_odd_bits(unsigned int num);
int main()
{
	unsigned int num;
	printf("\nEnter number:\n");
	scanf("%d", &num);
	printf("\nBinary representation:\n");
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(num & i) ? printf("1") : printf("0");
	}
	unsigned int res = toggle_even_bits(num);
	unsigned int res1 = toggle_odd_bits(num);
	printf("\nEven bits in num:\n");
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(res & i) ? printf("1") : printf("0");
	}
	printf("\n");
	printf("\nOdd bits in num: \n");
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(res1 & i) ? printf("1") : printf("0");
	}
	printf("\n");
	return 0;
}
unsigned int toggle_even_bits(unsigned int num)
{
	unsigned int evenbits = num & 0xAA;
	return evenbits;
}
unsigned int toggle_odd_bits(unsigned int num)
{
	unsigned int oddbits = num & 0x55;
	return oddbits;
}
	
