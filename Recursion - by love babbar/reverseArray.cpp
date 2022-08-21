#include<iostream>
using namespace std;
void reverse(int arr[] ,int left, int right){
    if(left>=right){
        return ;
    }  
    swap(arr[right],arr[left]);
    reverse(arr,left+1,right-1);
    
    
    
}

 int main(){
    int arr[] = {1,2,67,4,4,76};
    int n = 6;

    reverse(arr,0,n-1);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0; 
 }