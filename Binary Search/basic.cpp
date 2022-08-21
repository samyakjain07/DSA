#include<iostream>
using namespace std;
int main(){
    int arr[] = {1 ,2,3,4,5,6,7,8,9};
    int n = 9;
    int strt = 0;
    int end = n-1;
    int mid;
    int k = 6;
    while(strt<=end){
        mid = (strt+end)/2;
        if(arr[mid]==k){
            cout<<mid;
            break;
        }
        else if(arr[mid]>k){
            strt = strt;
            end = mid-1;

        }
        else{
            strt = mid+1;
            end = end; 
        }
    }
}