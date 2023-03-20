#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct node {
	int data;
	struct node *next;
};

int loopdetect(struct node *);
struct node* createnode(struct node *);
void display(struct node *);

int main()
{
	struct node *head = NULL;
	printf("\nSingle Linkedlist:\n");
	head = createnode(head);
	head->next->next->next->next->next = head->next->next;
	int res = loopdetect(head);
	if (res == 1) {
		printf("\nloop detected\n");
	} else {
		printf("\nNo loop detected\n");
	}
	//display(head);
	return 0;
}

/*function to create linkedlist*/
struct node* createnode(struct node *head)
{
	struct node *temp = NULL;
	int i = 0;
	int data;
	while ( i < SIZE ) {
    	struct node *new = (struct node*) malloc (sizeof (struct node)); /*dynamic memory allocation to new node*/
    	printf("\nEnter data\n");
		scanf("%d", &data);
		new->data = data;
    	new->next = NULL;
    	if (head == NULL ) { //checking wether head null or not
    		temp = head = new; // if null assign temp & head to new node
    	} else {
        	temp -> next = new;//referencing temp to next new node
        	temp = new;
    	}
		i++;
	}
    return head; //returning head pointer
}

/*function to display the output*/
void display(struct node *head)
{
	struct node *temp = head;
    while (temp->next != NULL) {
    	printf("[%d] ", temp->data);
    	temp = temp->next;
    }
}

/*function to detect the loop*/
int loopdetect(struct node *head) {
	struct node *slow = NULL;
	struct node *fast = NULL;
	slow = fast = head;
	if (head == NULL) {
		return 0;
	}

	while (slow != NULL && fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) { /*checking wether slow and fast pointers meet together*/
			return 1;
		}
	}
	return 0;
}
