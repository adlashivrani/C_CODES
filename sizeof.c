#include<stdio.h>
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)

int main()
{
	double x;
	char y;
	int z;
	printf("%ld\n", my_sizeof(x));
	printf("%ld\n", my_sizeof(y));
	printf("%ld\n", my_sizeof(z));
	return 0;
}

