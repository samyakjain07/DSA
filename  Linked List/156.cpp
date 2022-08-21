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
    
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;

}

node* reversee(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        
        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;

} 
void printList1(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}
bool pallidrome(node* &head,node* &head1){
    node* temp = head;
    printList1(head);
    
    node* temp1 = head1;
    
    while(temp!= NULL and temp1!= NULL){
        if(temp->data==temp1->data){
            cout<<1<<endl;
            temp = temp->next;
            temp1 = temp1->next;
        }
        else{
            cout<<2<<endl;
            return false;
        }
        
    }
    if (temp == NULL && temp1 == NULL) {
        cout<<3<<endl;
        return true; 
    }
        
  
    cout<<4<<endl;
    
    return false; 
}

void printList(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,1);
    printList(head);
    cout<<endl;

    node* head1 = reversee(head);
    


    bool result = pallidrome(head , head1);
    cout<<result;


}