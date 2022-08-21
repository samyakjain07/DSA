#include <iostream>
using namespace std;

bool isSubsetPossible(int arr[], int n, int sum) {
	bool t[n + 1][sum + 1];
	
	for (int i = 0; i <= n; i++) { 
		for (int j = 0; j <= sum; j++) { 
			if (i == 0)
                t[i][j] = false;
			if (j == 0) 
                t[i][j] = true;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (arr[i - 1] <= j) 
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j]; 
			else 
				t[i][j] = t[i - 1][j];
		}
	}

	return t[n][sum];
}
bool equalSumPartition(int arr[],int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum +arr[i];

	}
	if(sum%2!=0){
		return false;
	}
	else{
		return isSubsetPossible(arr,n,sum/2);
	}
}

int main() {
	int n = 5;
    int arr[] = {1, 5, 3, 7, 68};
    int sum = 10;
	cout<<equalSumPartition(arr,n);
	return 0; 
}