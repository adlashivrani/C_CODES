#include<stdio.h>
unsigned int count_set_bits( unsigned int num);
unsigned int count_clear_bits(unsigned int num);
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
	unsigned int res = count_set_bits(num);
	unsigned int res1 = count_clear_bits(num);
	printf("Count of set bits : %d\n", res);
	printf("Count of clear bits : %d\n", res1);
	return 0;
}
unsigned int count_set_bits( unsigned int num)
{
	unsigned int count = 0;
    // x holds one set digit at a time
    // starting from LSB to MSB of n.
    for (int x = 1; x <= num; x = x << 1)
        if ((x & num) != 0)
            count++;     
    return count;
}
unsigned int count_clear_bits(unsigned int num)
{
	 unsigned int count = 0;
     // x holds one set digit at a time
     // starting from LSB to MSB of n.
     for (int x = 1; x <= num; x = x << 1)
         if ((x | num) != 0)
             count++;
     return count;
}
	
