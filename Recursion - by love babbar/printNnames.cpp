#include<iostream>
using namespace std;
void name(int i , int n){
    if(i>n){
        return;
    }

    cout<<"Samyak"<<endl;
    name(i+1,n); 
}

int main(){
    int n = 5;
    name(1,n);
}