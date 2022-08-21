#include<iostream>
#include <stack>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head ,int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;

    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

}
bool pallindrome(node* &left,node* right){
    if(right==NULL){
        return true;
    }
    bool first = pallindrome(left, right->next);
    if(first==NULL){
        return false;
    }
    bool second = (right->data == left->data);
    left = left->next;
    return second;

    
}

int main(){
    node* head = NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,3);
    insertAtTail(head ,4);
    insertAtTail(head ,3);
    insertAtTail(head ,2);
    32insertAtTail(head ,1);

    cout<<pallindrome(head,head);
    

}