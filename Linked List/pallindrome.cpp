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
bool pallindrome(node* &head){
    node* slow = head;
    stack <int> s;

    while(slow != NULL){
                s.push(slow->data);
 
                // Move ahead
                slow = slow->next;
    }
    while(head != NULL ){
             
            int i=s.top(); 
            s.pop();
 
            if(head -> data != i){
                return false;
            }
            head=head->next;
        }
 
return true;
}

int main(){
    node* head = NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,3);
    insertAtTail(head ,4);
    insertAtTail(head ,3);
    insertAtTail(head ,2);
    insertAtTail(head ,1);

    cout<<pallindrome(head);
    

}