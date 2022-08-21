#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left, *right ;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]== curr){
            return i;
        }
    }
    return -1;

}

Node* buildTree(int preorder[] , int inorder[] , int start , int end){
    static int idx = 0;
    if(start > end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    
    Node* node = new Node(curr);
    if(start == end){
        return node;

    }
    int pos = search(inorder,start,end,curr);
    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1 , end);

    return node;

}

void printInorder(struct Node* node)
{
	if (node == NULL)
		return;

	printInorder(node->left);
    cout << node->data << " ";
	printInorder(node->right);
}
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left subtree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}
int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,3,5};

    Node* root = buildTree(preorder,inorder,0,4);
    //  printInorder(root);
    printPreorder(root);

    return 0 ;

}