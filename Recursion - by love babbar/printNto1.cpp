#include<iostream>
using namespace std;
void printNTo1(int i , int n){
    if(i>n){
        return;
    }

    printNTo1(i+1,n); 
    cout<<i<<endl;
}

int main(){
    int n = 5;
    printNTo1(1,n);
}