#include <iostream>
using namespace std;
void sort012(int a[], int n)
{
    int lo = 0;
    int mid = 0;
    int hi = n - 1;

    while (mid <= hi)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[lo++], a[mid++]);
            break;

        case 1:
            mid++;

            break;

        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << arr[i]<<" " ;
    }
}
int main()
{
    int arr[] = {0, 2, 2, 2, 1, 0, 2, 1, 0, 0, 2, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "before sort"<<endl;
    printArray(arr, n);

    sort012(arr, n);
    cout << "after sort"<<endl;
    printArray(arr, n);

    return 0;
}