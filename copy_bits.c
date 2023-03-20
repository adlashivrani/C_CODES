#include<stdio.h>
unsigned int copy_bits(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int main()
{
	unsigned int snum;
	unsigned int dnum;
	unsigned int s;
	unsigned int d;
	unsigned int n;
	printf("\nEnter source and destination numbers: \n");
	scanf("%d %d", &snum, &dnum);
	printf("\nEnter the position in source:\n");
	scanf("%d", &s);
	printf("\nEnter the position in destination:\n");
	scanf("%d", &d);
	printf("\nEnter number of bits to copy:\n");
	scanf("%d", &n);
	unsigned int res = copy_bits(snum, dnum, n, s, d);
	for ( int i = 1 << 7; i > 0; i = i / 2)
	{
		(res & i) ? printf("1") : printf("0");
	}
	return 0;
}
unsigned int copy_bits(unsigned int snum, unsigned int dnum, unsigned int n, unsigned int s, unsigned int d)
{
    unsigned int numbits = sizeof(unsigned int) * 8;
    unsigned int ones_mask;
	unsigned int ones_mask1;
    ones_mask = ((~(unsigned int ) 0) >> (numbits - n)) << s;
	ones_mask1 = ((~(unsigned int ) 0) >> (numbits - n)) << d;
    dnum = (dnum & ~ones_mask1) | (snum & ones_mask);
    return dnum;
} 
