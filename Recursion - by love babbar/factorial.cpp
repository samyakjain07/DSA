#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;

    }
    int prevProduct = fact(n - 1);
    return n * prevProduct ;
    }
 int main(){
     int n ;
     cin>>n;
     
     cout<<fact(n);
    return 0; 
 }