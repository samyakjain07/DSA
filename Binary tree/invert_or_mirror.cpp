#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }

};
void inverted(Node* root){
    if(root==NULL){
        return;
    }
    else{
        Node* temp;

        inverted(root->left);
        inverted(root->right);

        temp	 = root->left; 
		root->left = root->right; 
		root->right = temp; 


    }
}

void printBinaryTree(Node* root){
    if(root == NULL){
        return;
    }
    printBinaryTree(root->left);
    cout<<root->data<<" ";
    printBinaryTree(root->right);
}

int main(){

    Node* root = new Node(2);
    root->left = new Node(1);
	root->right = new Node(4);
	root->right->left =new  Node(3);
	root->right->right = new Node(5);
    cout<<"Before inverted"<<endl;
    printBinaryTree(root);
    cout<<"After inverted"<<endl;
    
    inverted(root);

    printBinaryTree(root);



}