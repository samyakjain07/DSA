#include<iostream>
#include <vector>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void sortedIntersect(Node* a, Node* b)
{
	 
}
void push(Node** head_ref, int new_data)
{
	Node* new_node = (Node*)malloc(
		sizeof(Node));

	new_node->data = new_data;
    new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

/* Function to print nodes in
a given linked list */
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data <<" ";
		node = node->next;
	}
}

/* Driver program to test above functions*/
int main()
{
	/* Start with the empty lists */
	Node* a = NULL;
	Node* b = NULL;
	Node* intersect = NULL;

	/* Let us create the first sorted
	linked list to test the functions
	Created linked list will be
	1->2->3->4->5->6 */
	push(&a, 3);
	push(&a, 6);
	push(&a, 9);
	push(&a, 67);
	push(&a, 2);
	push(&a, 1);

	/* Let us create the second sorted linked list
Created linked list will be 2->4->6->8 */
	push(&b, 8);
	push(&b, 9);
	push(&b, 4);
	push(&b, 2);

	/* Find the intersection two linked lists */
	sortedIntersect(a, b);

	cout<<"Linked list containing common items of a & b \n";
	// printList(intersect);
}

