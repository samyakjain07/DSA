#include <iostream>
using namespace std;

int isSubsetPossible(int arr[], int n, int sum) {
	int t[n + 1][sum + 1];
	
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
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j]; //sirf iss line me + lagaya h or ki jagah 
			else 
				t[i][j] = t[i - 1][j];
		}
	}

	return t[n][sum];
}

int main() {
	int n = 6;
    int arr[] = {2, 3,5,6,8,10};
    int sum = 10;

	cout<<isSubsetPossible(arr, n, sum) ;
    return 0; 
}