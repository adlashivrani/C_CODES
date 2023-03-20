#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void insertionsort(int *);

/*main program execution section*/
int main()
{
	int i;
	int arr[SIZE];
	printf("\nEnter data to list\n");
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]); //taking input from user
	}
	insertionsort(arr); 
	printf("\nAfter sorting\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]); //printing output to screen
	}
	return 0;
}

/*function to sorting the elements according to insertion sort*/
void insertionsort( int arr[SIZE]) 
{
	int i;
	int j;
	int temp;
	for (i = 1; i < SIZE; i++) {
		temp = arr[i];
		j = i - 1;
		while ( j >= 0 && arr[j] >= temp ) { /*sorting function*/
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
	
