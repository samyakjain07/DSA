#include <iostream>
using namespace std;

void maxProductSubarray(int arr[], int n)
{
	int curr = 1;
	int max = -100;
	for (int i = 0; i < n; i++)
	{
		curr = 1;

		for (int j = i; j < n; j++)
		{
			curr = curr * arr[j];

			if (max <= curr)
			{
				max = curr;
				cout<<max<<" ";
			}
		}
	}
	cout << max << endl;
}

int main()
{
	int arr[] = {6, -3, -10, 0, 2};
	int n = sizeof(arr) / sizeof(arr[0]);

	maxProductSubarray(arr, n);
}
