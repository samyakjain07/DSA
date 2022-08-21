#include<iostream>
using namespace std;

void sayDigits(int digit,string arr[]){

    if(digit==0){
        return;
    }
    int n = digit % 10;
    digit = digit/10;
   
    sayDigits(digit,arr);
     cout<<arr[n]<<" ";
}

int main(){

    int digit = 412;
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayDigits(digit,arr);
}
