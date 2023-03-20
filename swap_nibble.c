#include <stdio.h>
long int nibble(long int);

int main()
{
	long int i;
	long int num;
	printf("Enter number");
	scanf("%ld", &num);
	long int res = nibble(num);
	//for ( i = 1 << 31; i > 0; i = i / 2) {
	//	(res & i) ? printf("1") : printf("0");
	//}
	while ( res) {
		( res & 0x80000000) ? printf("1") : printf("0");
		res = res << 1;
	}
	return 0;
}

long int nibble( long int num)
{
	num = (num << 28) | (num >> 28) | ((( num >> 4) << 8) >> 4);
	return num;
}
