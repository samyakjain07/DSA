#include<iostream>
using namespace std;

int Npower(int n , int k){
    if(k==0){
        return 1;

    }
    int prevProduct = Npower(n ,k-1);
    return n * prevProduct ;
    }
 int main(){
     int n,k ;
     cin>>n;
     cin>>k;
     cout<<Npower(n,k);
    return 0; 
 }