#include<iostream>
using namespace std;
int main(){
    int arr[] = {1 ,2,3,4,4,4,7,8,9};
    int n = 9;
    int strt = 0;
    int end = n-1;
    int mid;
    int a;
    int k = 4;
    // first occurence
    while(strt<=end){
        mid = (strt+end)/2;
        if(arr[mid]==k){
            a = mid;
            end = mid-1;
            
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
    // cout<<"First Occurence"<<result;
    // last occurence
    strt = 0;
    end = n-1;
    mid = -1;
    int b;

    while(strt<=end){
        mid = (strt+end)/2;
        if(arr[mid]==k){
            b = mid;
           strt = mid+1;
            
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
    cout<<"total count = "<<b-a+1;

}