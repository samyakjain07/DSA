#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[] = { 0, 11, 0, 0, 6, 0, 5, 3, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
    int left = 0;
    int right = 0;
    while(right<n){
        if(arr[right]==0 and arr[left]==0){
            right++;
        }
        else if(arr[right]!=0 and arr[left]==0){
            swap(arr[right++] , arr[left++]);

        }
    }
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	
	return 0;
}

