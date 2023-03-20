#include <stdio.h>
 
long atoi(const char*);

//Implement `atoi()` function in C
int main()
{
    char S[] = "12345";
    printf("%ld ", atoi(S));
    return 0;
}
 
//Iterative function to implement `atoi()` function in C
long atoi(const char* S)
{
    long num = 0;
    int i = 0;
    //run till the end of the string is reached, or the
    //current character is non-numeric
    while (S[i] && (S[i] >= '0' && S[i] <= '9')) {
    	num = num * 10 + (S[i] - '0');
        i++;
    }
    return num;
}
