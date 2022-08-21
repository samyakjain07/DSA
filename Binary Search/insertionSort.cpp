#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,5,2,7,0,5};

    for(int i = 1;i<6;i++){
        int j = i-1;
        int current = arr[i];
        while(current< arr[j] and j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}