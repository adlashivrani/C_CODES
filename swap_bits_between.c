#include<stdio.h>
unsigned int swap_bits_between(unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d);
int main()
{
        unsigned int snum;
		unsigned int dnum;
        unsigned int s;
        unsigned int d;
        printf("\nEnter both numbers:\n");
        scanf("%d %d", &snum, &dnum);
		printf("Before swapping bits in both numbers:");
		 for ( int i = 1 << 7; i > 0; i = i / 2)
        {
                (snum & i) ? printf("1") : printf("0");
        }
        printf("\n");
		 for ( int i = 1 << 7; i > 0; i = i / 2)
        {
                (dnum & i) ? printf("1") : printf("0");
        }
        printf("\n");
        printf("\nEnter swapping positions:\n");
        scanf("%d %d", &s, &d);
		printf("After swapping bits:");
        swap_bits_between(snum, dnum, s, d);
        printf("\n");
        return 0;
}
unsigned int swap_bits_between(unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d)
{
        if (((snum & (1 << s)) >> s) ^ (( dnum & ( 1<< d)) >> d)) {
                snum = snum ^ ( 1 << s);
				dnum = dnum ^ ( 1 << d);
				 for ( int i = 1 << 7; i > 0; i = i / 2)
        		{
                	(snum & i) ? printf("1") : printf("0");
        		}
        		printf("\n");
                for ( int i = 1 << 7; i > 0; i = i / 2)
        		{
                	(dnum & i) ? printf("1") : printf("0");
        		}	
        }	 else {
			 	for ( int i = 1 << 7; i > 0; i = i / 2)
        		{
                	(snum & i) ? printf("1") : printf("0");
        		}
        		printf("\n");
                for ( int i = 1 << 7; i > 0; i = i / 2)
        		{
                	(dnum & i) ? printf("1") : printf("0");
        		}
		}
		return -1;
}
