#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int data;
	struct node *next;
};

struct node* createnode(struct node*);
struct node* deletenode(struct node*, int);
int counting(struct node *);
void freelist(struct node*);
void display(struct node *);

/*execution of program starts from main function*/
int main()
{
	int pos;
	struct node *head = NULL;
	head = createnode(head);
	printf("\nSingle linkedlist:\n");
	display(head);
	printf("\nEnter position to deletenode\n");
	scanf("%d", &pos);
	head = deletenode(head, pos);
	display(head);
	freelist(head);
	return 0;
}

/*function to create node*/
struct node* createnode(struct node *head)
{
	struct node *temp = NULL;
	int ch = 1;
	int data;
	while (ch ) {
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
		printf("\nEnter 0 to exit or 1 to continue\n");
		scanf("%d", &ch);
	}
	return head; //returning head pointer
}

/*function to delete the nth node*/
struct node* deletenode(struct node *head, int pos)
{
	int count = counting(head);
	struct node *temp = NULL;
	struct node *ptem = NULL;
	if (head == NULL ) {
		return head;
	} 
	if ( pos == 1 ) { /*deletion at first node*/
		temp = head;
		head = head->next;
	} else if ( pos == count) { /*deletion at last node*/
		temp = head;
		while (temp->next != NULL) {
			ptem = temp;
			temp = temp->next;
			}
		ptem->next = NULL;
	} else if ( pos < count ) { /*deletion at given position*/
			int i = 1;
			temp = head;
			struct node *nextnode = NULL;
			while (i < pos) {
				nextnode = temp;
				temp = temp->next;
				i++;
			}
			nextnode->next = temp->next;
	} else {
			printf("\nposition does not exit!\n");
	}
	return head;
}

/*function to count number of nodes*/
int counting(struct node *head) 
{
	int count = 0;
	struct node *temp = NULL;
	temp = head;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}

/*function to free the memory*/
void freelist(struct node *head) 
{
	struct node *temp = NULL;
	while (head != NULL ) {
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}

/*function to display the output*/
void display(struct node *head)
{
	struct node *temp = head;
	while (temp != NULL) {	
		printf("[%d] ", temp->data);
		temp = temp->next;
	}
}
