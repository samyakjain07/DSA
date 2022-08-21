#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){ 
        return 1;
    }
    if(b==1){ 
        return a;
    }
    // recrsive call

    int ans = power(a,b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    //if b is odd
    else{
        return a*ans*ans;
    }
        
}
int main(){
    int a = 2;
    int b = 16;
    cout<<"a power b ="<<power(a,b);
}