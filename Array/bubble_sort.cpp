#include <iostream>
using namespace std;

int main()
{
	int counter = 1,i;
	int arr[] = {1, 5, 9, 10, 15, 20, 2, 3, 8, 13};
	int n = sizeof(arr) / sizeof(arr[0]);

	while (counter < n)
	{

		for (i = 0; i < n - counter; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		counter++;
	}
	for (i = 0; i < n ; i++)
		{
			cout<<arr[i]<<" ";
		}

	return 0;
}
