#include <iostream>
using namespace std;
void print_array(int arr[], int size  , int x)
{
	static int i;
	if (i == size) {
		i = 0;
		cout << endl;
		return;
	}
	if(arr[i] == x){
	    cout << i << " ";  
	}
	i++;
	print_array(arr, size , x);
}
int main()
{
	int arr[] = { 3, 5, 6, 5, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 5;
	print_array(arr, n , x);
	return 0;
}

