#include <stdio.h>

void display( unsigned int);
void reg_store(unsigned int);
	
int main()
{
	unsigned int num;
	/*unsigned int reg1[10];
	unsigned int reg2[10];
	unsigned int reg3[12];
	unsigned int a = 0;//count for reg1
	unsigned int b = 0;//count for reg2
	unsigned int c = 0;//count for reg3
	unsigned int count = 0;
	while ( num ) {
	
	*/	
	printf("\nEnter number\n");
	scanf("%u", &num);
	display(num);
	reg_store(num);
	return 0;
}

void reg_store(unsigned int num)
{
	unsigned int reg1 = (num >> 22);
	unsigned int reg2 = ((num << 10) >> 22);
	unsigned int reg3 = ((num << 20) >> 20);
	printf("\nReg1\n");
	display(reg1);
	printf("\nREg2\n");
	display(reg2);
	printf("\nREg3\n");
	display(reg3);
}

void reg(unsigned int num)
{
	while ( num) {
	
void display(unsigned int num)
{
//	unsigned int i;
	//for ( i = 1 >> 31; i > 0; i = i/2) {
	//	(num & i) ? printf("1") : printf("0");
//	}
	while (num) {
    	(num & 0x80000000) ? printf("1") : printf("0");
        num = num << 1;
   	} 
	printf("\n");
}
