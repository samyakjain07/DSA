#include <iostream>
#include <stack>
using namespace std; 
// Tree Node
struct Node {
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorderIterative(struct Node* root){
    

    stack<Node*> s;
    Node* curr = root;

    while(!s.empty() || curr != NULL){

        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;

        }
        curr = s.top();
        s.pop();

        cout << curr->data << " ";
        curr = curr->right;
 
    }
}
int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->left->left = new Node(70);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->left->left->right = new Node(80);
 
    inorderIterative(root);
 
    return 0;
} 