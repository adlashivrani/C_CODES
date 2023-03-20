#include<stdio.h>
unsigned int swap_bits_within (unsigned int num, unsigned int s, unsigned int d);
int main()
{
	unsigned int num;
	unsigned int s;
	unsigned int d;
	printf("\nEnter a number:\n");
	scanf("%d", &num);
	printf("\nEnter swapping positions:\n");
	scanf("%d %d", &s, &d);
	unsigned int res = swap_bits_within(num, s, d);
	printf("\nAfter swapping: %d \n", res);
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(res & i) ? printf("1") : printf("0");
	}
	printf("\n");
	return 0;
}
unsigned int swap_bits_within(unsigned int num, unsigned int s, unsigned int d)
{
	if (((num & (1 << s)) >> s) ^ (( num & ( 1<< d)) >> d)) {
		// Get s bit
	 	unsigned int temp1 = (num >> s) & 1;
    	// Get d bit
    	unsigned int temp2 = (num >> d) & 1;
    	// Get XOR of s,d
    	unsigned int xorbit = temp1 ^ temp2;
    	num = num ^ (xorbit << s | xorbit << d);
	}
    return num;
}
