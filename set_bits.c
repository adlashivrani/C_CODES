#include<stdio.h>
unsigned int set_bits(unsigned int dnum, unsigned int p, unsigned int n,unsigned  int snum);
int main()
{
   	unsigned int dnum;
	unsigned int p;
	unsigned int n;
	unsigned int snum;
	printf("Enter destination number : ");
	scanf("%d", &dnum);
	for( int i = 1 << 7; i > 0; i = i /2)
    {
        ( dnum & i) ? printf("1") : printf("0");
    }
    printf("\n");
	printf("Enter the position:\n");
	scanf("%d", &p);
	printf("\nEnter number of bits : ");
	scanf("%d", &n);
	printf("\nEnter source number: ");
	scanf("%d", &snum);
	unsigned int res = set_bits( dnum, p, n, snum);
	for( int i = 1 << 7; i > 0; i = i /2)
	{
		( res & i) ? printf("1") : printf("0");
	}
	printf("\n");
	return 0;
}

unsigned int set_bits(unsigned int dnum, unsigned int p, unsigned int n, unsigned int snum)
{
    return dnum & ~(~(~0 << n) << (p+1-n)) | ( snum & (~(~0<<n)) << (p+1-n));
}
