#include<stdio.h>
unsigned int count_leading_clear_bits( unsigned int num);
unsigned int count_leading_set_bits(unsigned int num);
unsigned int count_trailing_clear_bits(unsigned int num);
unsigned int count_trailing_set_bits(unsigned int num);
int main()
{
        unsigned int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        for ( int i = 1 << 7; i > 0; i = i / 2 )
        {
                (num & i) ? printf("1") : printf("0");
        }
        printf("\n");
        unsigned int res1 = count_leading_set_bits(num);
        unsigned int res2 = count_leading_clear_bits(num);
		unsigned int res3 = count_trailing_set_bits(num);
		unsigned int res4 = count_trailing_clear_bits(num);
        printf("Count of leading set bits : %d\n", res1);
        printf("Count of leading clear bits : %d\n", res2);
		printf("Count of trailing set bits : %d\n", res3);
		printf("Count of trailing clear bits : %d\n", res4);
        return 0;
}
unsigned int count_leading_clear_bits( unsigned int num)
{
    unsigned int count = 0;
	unsigned int total_bits = 8;
    while ( !(num & (1 << (total_bits - 1))) )
    {
        num = (num << 1);
        count++;
    }
    return count;
}
unsigned int count_leading_set_bits(unsigned int num)
{	
	 unsigned int count = 0;
     unsigned int total_bits = 8;
     while ( (num & (1 << (total_bits - 1))) )
      {
          num = (num << 1);
          count++;
     }
     return count;
}
unsigned int count_trailing_clear_bits( unsigned int num)
{
    unsigned int count = 0;
	unsigned int bits = 8;
	unsigned int i = 0;
	while ( i < bits ) {
		if ( (num >> i) & 1) {
			break;
		}
		count++;
		i++;
	}
    return count;
}
unsigned int count_trailing_set_bits(unsigned int num)
{
     unsigned int count = 0;
	 unsigned int bits = 8;
	 unsigned int i = 0;
	 while (i < bits) {
		if (!((num >> i) & 1)) {
			break;
		}
		count++;
		i++;
	}
     return count;
}
