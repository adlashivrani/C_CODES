#include<stdio.h>
#include<string.h>
#define SIZE 20

int charcount( char *, char *);

int main()
{
	char str1[SIZE];
	char str2[SIZE];
	int count;
	printf("Enter string1");
//	fgets(str1, SIZE, stdin);
	scanf("%s", str1);
	printf("Enter string2");
	//fgets(str2, SIZE, stdin);
	scanf("%s", str2);
	//*(str1 + (strlen(str1) - 1)) = '\0';
	//*(str2 +(strlen(str2) - 1)) = '\0';
	//count = charcount(str1, str2);
	printf("count= %d", charcount(str1, str2));
	return 0;
}

int charcount(char *str1, char *str2)
{
	int count = 0;
	while (*str1 != '\0') {
		while (*str2 != '\0') {
			if (*str1 == *str2) {
				count += 1;
				break;
				
			} else {
				*str2++;
			}
		}
		*str1++;
	}
	return count;
}
