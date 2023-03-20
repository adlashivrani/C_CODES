#include<stdio.h>
#include<string.h>
#define SIZE 20
#include<stdio_ext.h>

char *insert(char *str, char ch, int pos);

int main()
{
	char str[SIZE];
	char ch;
	int pos;
	printf("Enter string");	
	scanf("%s", str);
	__fpurge(stdin);
	printf("Enter char\n");
	scanf("%c", &ch);
	__fpurge(stdin);
	printf("Enter pos\n");
	scanf("%d", &pos);
	//printf("Enter string");
	//fgets(str, 10, stdin);
	//str[strlen(str) - 1] = '\0';
	insert(str, ch, pos);
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
	return 0;
}

char *insert(char *str, char ch, int pos)
{
	char *temp = str;
	int i = 0;
	int j;
	int length = strlen(temp);
	while (str[i]!= '\0') {
		if (i == pos) {
			//str[i] = ch;
			//int length = strlen(temp);
			for (j = length ; j >= pos; j--) {	
				str[j + 1] = temp[j];
			}
		} 
		i++;
	}
	str[pos] = ch;
	str[i] = '\0';
	return temp;
}
