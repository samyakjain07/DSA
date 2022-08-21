#include<iostream>
#include <stack>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
Node* newNode(int data)
{
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = newNode(new_data);
	/* link the old list off the new node */
	new_node->next = (*head_ref);
	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

Node* addTwoLists(Node* first, Node* second)
{
	
	Node *temp, *prev = NULL ,*res=NULL;
	int carry = 0, sum;

	
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
	// reverse the rest list and put the first element at the end
	Node* rest = reverse(head->next);
	head->next->next = head;
	head->next = NULL;
	// fix the head pointer
	return rest;
}

// A utility function to print a linked list
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
	cout << endl;
}

/* Driver code */
int main(void)
{
	Node* res = NULL;
	Node* first = NULL;
	Node* second = NULL;

	// create first list 7->5->9->4->6
	push(&first, 6);
	push(&first, 4);
	push(&first, 9);
	push(&first, 5);
	push(&first, 7);
	printf("First List is ");
	printList(first);

	// create second list 8->4
	push(&second, 4);
	push(&second, 8);
	cout << "Second List is ";
	printList(second);

	// reverse both the lists
	first = reverse(first);
	second = reverse(second);
	// Add the two lists
	res = addTwoLists(first, second);

	// reverse the res to get the sum
	res = reverse(res);
	cout << "Resultant list is ";
	printList(res);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)

