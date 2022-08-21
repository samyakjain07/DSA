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
node* duplicatesorted(node* &head){
    node* curr = head;
    while(curr->next!= NULL){

        if(curr->data==curr->next->data){
            node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
        
    }
    return head;

}
node* duplicate(node* &head){
    node* curr = head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

void display(node* head){
    node* temp =head;
    while(temp!=NULL){
       cout<<temp->data <<"->";
        temp = temp->next;
    }
    cout<< "NULL" << endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,2);
    insertAtTail(head ,4);
    display(head);
    
    node* newhead = duplicatesorted(head);
    display(newhead);
}