#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    if(n==0){
        return;
    }
    for(int i=0 ;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i] , arr[i+1]); 
        }
    }
    
    bubbleSort(arr,n-1);
    cout<<arr[n-1]<<" ";
}

int main()
{
	int arr[] = {1, 5, 9, 10, 15, 20, 2, 3, 8, 13};
	int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);

}    