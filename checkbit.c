#include <stdio.h>
unsigned int checkbit(unsigned int);

int main()
{
	unsigned int num;
	printf("Enter a num");
	scanf("%d", &num);
	printf("\nBefore check\n");
	for ( int i = 1 << 7; i > 0; i = i/2) {
		(num & i ) ? printf("1") : printf("0");
	}
	printf("\nAfter check\n");
	unsigned int res = checkbit(num);
	for ( int i = 1 << 7; i > 0; i = i/2) {
		(res & i ) ? printf("1") : printf("0");
	}
	return 0;
}

unsigned int checkbit( unsigned int num) 
{
	if ( (num >> 1) & (0x01)) {
		num = num & (~(1 << 6));
	}
	return num;
}
