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
node* middleElement(node* &head){
    node* sp=head;
    node* fp=head;
    node* prevPtr =NULL;


    while(fp!=NULL and fp->next!=NULL){
        prevPtr = sp;
        sp = sp->next;
        fp = fp->next->next;
    }
    node* todelete = sp;
    
    prevPtr->next=sp->next;
    delete todelete;
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
    insertAtTail(head ,5);
    
    display(head);
    node* newhead = middleElement(head);
    display(newhead);
}