#include<iostream>
using namespace std;

int reverse(int n ,int temp){
    if(n==0){
        return temp;
    }
    temp = (temp * 10) + (n % 10);
 
    return reverse(n / 10, temp);
}
int main(){
    int n = 1214;
    int a = reverse(n , 0);
    if(a == n){
        cout<<"it is a palindrome ";
    }
    else{
        cout<<"it is not a palindrome ";
    }
}