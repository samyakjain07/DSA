#include<iostream>
using namespace std;

void bubbleSort(int *arr,int n){

    if(n==1 || n==0){ 
        return ;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);

        
}
int main(){
    int arr[] = {2 ,8,6,5,4,4,67,8,0};
    int n= 9;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}