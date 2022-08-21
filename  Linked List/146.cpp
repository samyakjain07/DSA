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

node* moveLastToFirst(node* &head){
    node* last = head;
    node* secLast =  NULL;

    while(last->next!=NULL){
        secLast = last;
        last = last->next;
    }

    secLast->next = NULL;
    last->next = head;
    head = last;
    
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
    insertAtTail(head ,3);
    insertAtTail(head ,4);
    
    display(head);
    node* newhead = moveLastToFirst(head);
    display(newhead);
    
}