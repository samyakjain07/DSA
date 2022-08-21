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
int middleElement(node* &head){
    node* sp=head;
    node* fp=head;

    while(fp!=NULL and fp->next!=NULL){
        sp = sp->next;
        fp = fp->next->next;
    }

    return sp->data;
} 

void display(node* head){
    node* temp =head;
    while(temp->next!=NULL){
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
    insertAtTail(head ,5);
    
    display(head);
    cout<<middleElement(head);
   
}