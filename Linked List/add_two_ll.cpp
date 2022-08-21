#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;

    
};
Node *newNode(int data)
{
	Node *new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

Node *reverse(Node *head)
{
	Node * prev = NULL;
	Node * current = head;
	Node * next;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

Node* addLinkedList(Node* &first,Node* &second){
	head1 = reverse(first);
	head2 = reverse(second);

	while(head1!= NULL || head2!=NULL){
		 
	}

}
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main(void)
{
	Node *head1 = newNode(9);
	head1->next = newNode(9);
	head1->next->next = newNode(9);
	head1->next->next->next = newNode(9);

    Node *head2 = newNode(9);
	head2->next = newNode(9);
	head2->next->next = newNode(9);
	head2->next->next->next = newNode(9);
    printList(head2);

    addLinkedList(head1 , head2);
	return 0;
}