#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* GetMid(Node* head)
    {
        Node*slow = head;
        Node*fast = head->next;
        if(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node* Merge(Node*left, Node*right)
    {
        if(left == NULL)
        {
            return right;
        }
        if(right == NULL){
            return left;
        }
        
        Node*tail = NULL, *head = NULL;
        if(left->data <= right->data)
        {
            head = tail = left;
            left = left->next;
        }
        else
        {
            head = tail = right;
            right = right->next;
        }
        while(left != NULL && right != NULL)
        {
            if(left->data <= right->data)
            {
                tail->next = left;
                tail = left;
                left = left->next;
            }
            else
            {
                tail->next = right;
                tail = right;
                right = right->next;
            }
        }
        if(left == NULL)
        {
            tail->next = right;
        }
        else
        tail->next = left;
        return head;
    }
    Node* mergeSort(Node* head) {
        // your code here
        if(head == NULL || head->next == NULL)
        return head;
        Node* left = head;
        Node* mid = GetMid(head);
        Node* right = mid->next;
        mid->next = NULL;
        left = mergeSort(left);
        right = mergeSort(right);
        Node* result = Merge(left, right);
        return result;
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends