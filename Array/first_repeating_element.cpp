#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 5, 8, 9, 6,4, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	/*Here we take two parameters, the beginning of the
	array and the length n upto which we want the array to
	be sorted*/
	sort(arr,arr+n);
    for(int i=0 ; i<n;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
            break;
        }
    }
   


	return 0;
}

