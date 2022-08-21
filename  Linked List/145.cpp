#include<iostream>
#include <set>
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

void display(node* head){
    node* temp =head;
    while(temp!=NULL){
       cout<<temp->data <<"->";
        temp = temp->next;
    }
    cout<< "NULL" << endl;
}

node* duplicateUnsorted(node* &head){
    
    set<int> vis;
    node* curr = head;
    node* prev = curr;

    while(curr!=NULL){
        if(vis.count(curr->data)){
            prev->next=curr->next;
            delete curr;
        }
        else{
            vis.insert(curr->data);
            prev = curr; 


        }
        curr = prev->next;

    }
    return head;
}

int main(){
    node* head = NULL;
    insertAtTail(head ,1);
    insertAtTail(head ,2);
    insertAtTail(head ,2);
    insertAtTail(head ,4);
    insertAtTail(head ,1);
    insertAtTail(head ,6);
    insertAtTail(head ,5);
    insertAtTail(head ,4);
    display(head);
    
    node* newhead = duplicateUnsorted(head);
    display(newhead);
}