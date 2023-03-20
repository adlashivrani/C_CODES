#include<stdio.h>
unsigned int get_bits(unsigned int num, unsigned int p, unsigned int n);
int main()
{
    	unsigned int num;
        unsigned int p;
        unsigned int n;
        printf("\nEnter the number:\n");
        scanf("%d", &num);
        printf("\nBinary representation of num:\n");
        for ( int i = 1 << 7; i > 0; i = i / 2)
        {
                (num & i) ? printf("1") : printf("0");
        }
        printf("\nEnter position:\n " );
        scanf("%d", &p);
        printf("\nEnter number of bits :\n");
        scanf("%d", &n);
        unsigned int res = get_bits(num, p, n);
        printf("\nAfter getting the bits are:\n ");
        for (int i = 1 << 7; i > 0; i = i / 2)
        {
                (res & i) ? printf("1") : printf("0");
        }
        printf("\n");
        return 0;

}
unsigned int get_bits(unsigned int num, unsigned int p, unsigned int n)
{
    return   num & ~((~(~0 << n) << (p + 1 - n)));
}
