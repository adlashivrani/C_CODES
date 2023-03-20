#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

int main()
{
	char words[SIZE][50];
	int i;
	int count[4];
	char line[SIZE];
	char *word;
	char *repeated;
	FILE *fp = NULL;
	
	if ((fp = fopen("input1.txt","r")) == NULL) { //opening file in read mode
		exit(1);
	}

	printf("Enter 4 words\n");
	for ( i = 0; i < 4; i++) {
		scanf("%s", words[i]); //taking input from user
	}	

	for ( i = 0; i < 4; i++) {
		count[i] = 0; // initializing count to 0
	}

	while (fgets(line, SIZE, fp) != NULL) { //reading from file
		for ( i = 0; i < 4; i++) {
			word = words[i]; 
			repeated = strstr(line, word); 
			while (repeated != NULL) {
				count[i]++;
				repeated = strstr(repeated + 1, word);
			}
		}
	}

	for ( i = 0; i < 4; i++) {
		printf("%s count %d\n", words[i], count[i]);
	}
	fclose(fp);
	return 0;
}
