#include <stdio.h>
#if 0
// Define macro to check maximum and minimum
#define MAX(x, y) 	x ^ ((x ^ y) & -(x < y))
#define MIN(x, y) 	y ^ ((x ^ y) & -(x < y))
int main()
{
    int num1, num2;
    // Input numbers from user
    printf("Enter any two number to check max and min: ");
    scanf("%d%d", &num1, &num2);
    printf("MAX(%d, %d) = %d\n", num1, num2, MAX(num1, num2));
    printf("MIN(%d, %d) = %d\n", num1, num2, MIN(num1, num2));

    return 0;
}
#endif
#if 0
#define CLEAR_RIGHT_MOST(x) ((x) & (x-1))
int main()
{ 	
	int num;
	printf("Enter number:\n");
	scanf("%d", &num);
	printf("After clearing right most bit\n");
	int res = CLEAR_RIGHT_MOST(num);
	for ( int i = 1 << 7; i > 0; i = i / 2) {
		(res & i) ? printf("1") : printf("0");
	}
	return 0;
}
#endif
#if 0
#define CLEAR_LEFT_MOST(x, y) ((x) & (~(1 << (y))))
int main()
{
	int num;
    int pos = 0;
    int p;
    printf("Enter number:\n");
    scanf("%d", &num);
    int n = num;
    while ( num > 0) {
         num = num >> 1;
         pos++;
    }
    p = pos-1;
    printf("After clearing left most bit\n");
    int res = CLEAR_LEFT_MOST(n, p);
    for ( int i = 1 << 7; i > 0; i = i / 2) {
         (res & i) ? printf("1") : printf("0");
  	}
    return 0;
}
#endif
#if 0
#define SET_RIGHT_MOST(x) (( x ) | (x + 1))
int main()
{
        int num;
        printf("Enter number:\n");
        scanf("%d", &num);
        printf("After setting right most bit\n");
        int res = SET_RIGHT_MOST(num);
        for ( int i = 1 << 7; i > 0; i = i / 2) {
                (res & i) ? printf("1") : printf("0");
        }
        return 0;
}
#endif
#if 0
#define SET_LEFT_MOST(x) ((x) | (1 << 7))
int main()
{
    int num;
    int pos = 0;
    int p;
    printf("Enter number:\n");
    scanf("%d", &num);
    printf("After setting left most bit\n");
    int res = SET_LEFT_MOST(num);
    for ( int i = 1 << 7; i > 0; i = i / 2) {
         (res & i) ? printf("1") : printf("0");
        }
    return 0;
}
#endif

