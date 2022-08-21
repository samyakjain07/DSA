#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==1 || size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int remainingArray = isSorted(arr+1,size-1);
        return remainingArray;
    }
}

int main(){

    int arr[] = {2,4,4,6,7};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Sorted";

    }
    else{
        cout<<"Unsorted";
    }
}