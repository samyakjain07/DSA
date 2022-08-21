#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 ,2,3,4,8,10,10,11,12};
    int n = 8;
    int strt = 0;
    int end = n-1;
    int mid;
    int result;
    // floor
    int k = 11;
    
    while(strt<=end){
        mid = (strt+end)/2;
        if(arr[mid]==k){
            // cout<<arr[mid];
            break;
        }
        else if(arr[mid] < k){
            result = arr[mid];
            strt = mid +1;
        }
        else{
            end = mid - 1 ;
        }
    }
    cout<<arr[mid];

}