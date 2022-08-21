#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total=((n+1)*(n+2))/2;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum =sum + arr[i];
    }
    cout<< "Missing number " <<total-sum;
}
