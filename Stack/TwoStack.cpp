#include<iostream>
using namespace std;
#define n 10
class Stack{

    int* arr;
    int top;
    int size;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
        size = n;
    }

    void push1(int x){
        if(top==n-1){
            cout<<"OverFlow";
            return;
        }
        if(top<size){
            top++;
            arr[top] = x;
        }
        
    }
    void push2(int x){
        if(size == -1){
            cout<<"OverFlow";
            return;
        }
        if(top<size){
            size--;
            arr[size] = x;
        }
        
    }
    int top1(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    int top2(){
        if(size==n){
            return -1;
        }
        return arr[size];
    }
    bool empty1(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool empty2(){
        if(size==n){
            return true;
        }
        else{
            return false;
        }
    }
    void pop1(){
        if(top==-1){
            cout<<"UnderFlow";
            return;
        }
        top--;
    }
    void pop2(){
        if(size==n){
            cout<<"UnderFlow";
            return;
        }
        size++;
    }


};   

int main(){
    Stack st;
    Stack st2;
    st.push1(1);
    st2.push2(2);
    st.push1(3);
    st2.push2(4);
    st.push1(1);
    st2.push2(5);
    st.push1(6);
    st2.push2(7);
    st.push1(9);
    st2.push2(70);

    // cout<<st2.top2()<<endl;
    // cout<<st.top1()<<endl;

    // st2.push2(70);

    while(!st.empty1()){
        cout<<st.top1()<<endl;
        st.pop1();
    }
    while(!st2.empty2()){
        cout<<st2.top2()<<endl;
        st.pop2();
    }


    
}