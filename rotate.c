#include<stdio.h>
unsigned int left_rotate_bits(unsigned int , unsigned int );
unsigned int right_rotate_bits(unsigned int , unsigned int );
/* Driver program */
int main()
{
	unsigned int num;
	unsigned int n;
	printf("\nEnter the number \n");
	scanf("%d", &num);
	printf("\nEnter the number of bits to shift :\n");
	scanf("%d", &n);
	unsigned int res = left_rotate_bits(num, n);
	unsigned int res1 = right_rotate_bits(num, n);
	printf("\nAfter left rotation bits are:\n ");
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(res & i) ? printf("1") : printf("0");
	}
	printf("\n");
	printf("\nAfter right rotation bits are:\n ");
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(res1 & i) ? printf("1") : printf("0");
	}
	printf("\n");
	return 0;
}
/*Function to left rotate num by n bits*/
unsigned int left_rotate_bits(unsigned int num, unsigned int n)
{
    return (num << n) | (num >> (8 - n));
}
/*Function to right rotate num by n bits*/
unsigned int right_rotate_bits(unsigned int num, unsigned int n)
{
     return (num >> n) | (num << (8 - n));
}
