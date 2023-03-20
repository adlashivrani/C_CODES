#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

void printList(Node*);
Node* newNode(int);
Node* addTwoLists(Node*, Node*);
Node* reverse(Node*);
void push(Node** , int);

int main()
{
        Node* res = NULL;
        Node* first = NULL;
        Node* second = NULL;

        // create first list 7->5->9->4->6
        push(&first, 6);
        push(&first, 4);
        push(&first, 9);
  //      push(&first, 5);
//        push(&first, 7);
        printf("First list is ");
        printList(first);

        // create second list 8->4
        push(&second, 4);
        push(&second, 8);
        printf("Second list is ");
        printList(second);

        // reverse both the lists
        first = reverse(first);
        second = reverse(second);
        // Add the two lists
        res = addTwoLists(first, second);

        // reverse the res to get the sum
        res = reverse(res);
        printf("Resultant list is ");
        printList(res);
        return 0;
}

Node* newNode(int data)
{
	Node* new_node = (Node *)malloc(sizeof(Node));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void push(Node** head_ref, int new_data)
{
	Node* new_node = newNode(new_data);
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

Node* addTwoLists(Node* first, Node* second)
{
	Node* res = NULL;
	Node *temp;
	Node *prev = NULL;
	int carry = 0;
	int sum;
	while (first != NULL || second != NULL) {
		sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
		carry = (sum >= 10) ? 1 : 0;
		sum = sum % 10;
		temp = newNode(sum);
		if (res == NULL)
			res = temp;
		else
			prev->next = temp;
		prev = temp;
		if (first)
			first = first->next;
		if (second)
			second = second->next;
	}
	if (carry > 0)
		temp->next = newNode(carry);
	return res;
}

Node* reverse(Node* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	Node* rest = reverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return rest;
}

void printList(Node* node)
{
	while (node != NULL) {
		printf("%d ",node->data);
		node = node->next;
	}
	printf("\n");
}
