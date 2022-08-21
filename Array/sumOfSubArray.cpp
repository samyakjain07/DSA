#include <iostream>
using namespace std;

void sumOfSubArray(int arr[], int n)
{
	int curr = 0;
	for (int i = 0; i < n; i++)
	{
		curr = 0;
		for (int j = i; j < n; j++)
		{
			curr = curr + arr[j];
			// if (curr == 0)
			// {
			// 	cout << "YES" << endl;
				
			// }
		} 
		cout<<curr<<endl;
	}
}

int main()
{
	int arr[] = {4, 2, -3, 1, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	sumOfSubArray(arr, n);
}
