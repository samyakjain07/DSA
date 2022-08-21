#include<iostream>
using namespace std;
void print1ToN(int i , int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    print1ToN(i-1,n);
    // cout<<i<<endl;
}

int main(){
    int n = 5;
    print1ToN(n,n);
}