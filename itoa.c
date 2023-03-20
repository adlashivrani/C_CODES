#include<stdio.h>

//function to reverse a string
void reverse(char str[], int length)
{
    int start;
    int end = length -1;
    for(start = 0; start < end; ++start, --end)
    {
        const char ch = str[start];
        str[start] = str[end];
        str[end] = ch;
    }
}

//Implemented own itoa function
char* itoa(int num, char* str, int base)
{
    int i = 0;
    char isNegNum = 0;
    /*Handle 0 explicitly, 
      otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
    }
    else
    {
        // In library itoa function -ve numbers handled only with
        // base 10. SO here we are also following same concept
        if ((num < 0) && (base == 10))
        {
            isNegNum = 1;
            num = -num; // make num positive
        }
        // Process individual digits
        do
        {
            const int rem = (num % base);
            str[i++] = (rem > 9)? ((rem-10) + 'a') : (rem + '0');
            num = num/base;
        }
        while (num != 0);
        // If number is negative, append '-'
        if (isNegNum)
        {
            str[i++] = '-';
        }
        // Append string terminator
        str[i] = '\0';
        // Reverse the string
        reverse(str, i);
    }
    return str;
}

int main()
{
    char str[100] = {0};
    
    printf("Base:10 %s\n", itoa(2324, str, 10));
    printf("Base:10 %s\n", itoa(-2324, str, 10));
    printf("Base:16 %s\n", itoa(2324, str, 16));
    printf("Base:8 %s\n", itoa(2324, str, 8));
    printf("Base:2 %s\n", itoa(2324, str, 2));
    
    return 0;
}
