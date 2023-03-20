#include<stdio.h>
unsigned char addition( unsigned char n1, unsigned char n2);
int main() 
{ 
	unsigned char n1;
	unsigned char n2;
	printf("\nEnter values:\n");
	scanf("%hhu %hhu", &n1, &n2);
	unsigned char res = addition(n1, n2);
	printf("\nAfter addition: %hhu\n", res);
	for (int i = 1 << 7; i > 0; i = i / 2)
	{
		( res & i) ? printf("1") : printf("0");
	}
	return 0;
}
unsigned char addition( unsigned char n1, unsigned char n2)
{
	unsigned char tmp;
	while ( n2 != 0) {
		tmp = (n1 & n2) << 1;
		n1 = n1 ^ n2;
		n2 = tmp;
	}
	return n1;
}

