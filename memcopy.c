#include<stdio.h>
#include<string.h>
#define SIZE 50
void mymemcopy(void *des, void *src, size_t n);

// Driver program
int main()
{
	char src[SIZE];
	printf("\nEnter input\n");
	fgets(src, SIZE, stdin);
	char des[100];
	mymemcopy(des, src, strlen(src)+1);
	printf("\nCopied string is %s\n", des);
	return 0;
}

void mymemcopy(void *des, void *src, size_t num) 
{
	// Typecast src and des addresses to (char *)
	char *csrc = (char *)src;
	char *cdes = (char *)des;
	// Copy contents of src to des
	for (int i = 0; i < num; i++) {
        cdes[i] = csrc[i];
	}
}
