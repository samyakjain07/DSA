#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, -3, 1, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
    int curr = 0;
    int sum = 0; 
    for(int i =0 ; i<n ; i++){
        curr = arr[i];
        for(int j= i+1; j<n+1; j++){
            if (sum == curr) {
                cout<<"found";
                }
                 else if (curr > sum){
                    break;
                 }
            curr = curr+arr[j];
        }
        
        
    }

}