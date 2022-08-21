#include<iostream>
using namespace std;
#define n 100
class Stack{
    int* arr;
    int top;

    public:

    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"OverFlow";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"UnderFlow";
            return;
        }
        top--;
    }

    int topElement(){
        if(top==-1){
            cout<<"UnderFlow";
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.topElement()<<endl;
    st.pop();
    cout<<st.topElement()<<endl;
    cout<<st.empty()<<endl;

}