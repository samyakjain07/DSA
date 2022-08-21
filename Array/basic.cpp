#include <iostream>
using namespace std;

void rearrange(int arr[] , int n){

	int p1 = 0;
	int p2 = 0;

	for(int i = 0;i<n;i++){
		if(arr[i]>0){
			p1++;
			p2;

		}
		else{
			swap(arr[p2++] , arr[p1++]);
		}

	}

	
}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { 1, -3, 6, -3, 2,
				3, 6, 8, 9, -5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	rearrange(arr,n);
	printArray(arr, n);
	return 0;
	
}