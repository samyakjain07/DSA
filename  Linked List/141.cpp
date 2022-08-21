#include<iostream>
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

bool detectLoop(node* &head){
    node* fp = head;
    node* sp = head;

    while(fp!=NULL and fp->next!=NULL){
        // cout<<1;
        sp = sp->next;
        fp = fp->next->next;
        if(sp==fp)
            return true;
    }
    return false;

}


int main(){
    node* head = NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,3);
    insertAtTail(head ,4);

    node* curr = head;
    node* temp = head;
    while(curr->next){
        curr = curr->next;
    }
    while(temp->data!=2){
        temp = temp->next;
    }
    curr->next=temp;
    cout<<detectLoop(head);
    

}