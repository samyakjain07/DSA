#include<iostream>
using namespace std;
void sorted(int arr[] ,int n){
    if(n==0){
        return ;
    }    
    cout<<arr[0]<<endl;
    
    return sorted(arr+1, n-1);
}

 int main(){
     int arr[] = {1,2,67,4,4,76};
     int n = 6;

     sorted(arr,n);
    return 0; 
 }