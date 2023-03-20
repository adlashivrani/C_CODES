#include<stdio.h>
#if 1
int* bit_display(int, int []);
int main()
{
	int num;
	int arr[8];
	printf("Enter the number : ");
	scanf("%d", &num);
	bit_display(num, arr);
	for (int i = 7; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	return 0;
}
int* bit_display(int num, int arr[8])
{
	for( int i = 7; i >=0; i--) {
		int result = num >> i;
		if ( result & 1) {
			arr[i] = 1;
		} else {
			arr[i] = 0;
		}
	}
	return arr;
}
#endif
#if 0
void bit_display(unsigned char);
int main()
{
        unsigned char num;
        printf("Enter the number : ");
        scanf("%hhu", &num);
        bit_display(num);
        return 0;
}
void bit_display(unsigned char num)
{
        for( int i = 7; i >=0; i--) {
                int result = num >> i;
                if ( result & 1) {
                        printf( "1");
                } else {
                        printf("0");
                }
        }
}
#endif
