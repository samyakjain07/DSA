#include<iostream>
using namespace std;

int powerr(int n , int pow){
    if(pow<=0){
        return 1;
    }
    
    int ans =  powerr(n , pow-1);
    int main = n*ans;
    return main;
    
}

int main(){
    int n = 2;
    int pow = 5;
    int ans = powerr(n ,pow);
    cout<<ans;
}