#include <stdio.h>
#include<stdlib.h>

//main function
int main(int argc, char *argv[])
{
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	char ch;
	char c;	
	int count = 0;
	if ((fp1 = fopen(argv[1], "r")) == NULL) { /*opening file 1 in read mode*/
		exit(1); //Exit on error
	}
	if ((fp2 = fopen(argv[2], "w+")) == NULL) { /*opening file 2 in write mode*/
		exit(1); //Exit on error
	}
	c = fgetc(fp1);
	while ( c != EOF) { /*fetching char by char from file fp1*/
		fputc(c,fp2); /*writing to the file 2*/
		c = fgetc(fp1);
	}
	fseek(fp2, 0, SEEK_SET);/*Resetting the file cursor to starting position*/
	ch = fgetc(fp2);
	while (ch != EOF) { /*Fetching char by char from fp2*/
		if (ch == '\n') {  //check end of line character*/
			count += 1; /*increment when encountered end of line */
		}
		ch = fgetc(fp2);
	}
	printf("\nCount of number of lines: %d\n",count);
	fclose(fp1);/*closing file pointer fp1*/
	fclose(fp2); /*closing file pointer fp2*/
	return 0;
}
