#include <iostream>
using namespace std;

void findCommon(int arr1[], int arr2[], int arr3[], int n, int m, int l)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m && k < l)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i]<<endl;
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    //int arr1[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    //int arr2[] = {1, 2, 3, 4, 7, 8, 9};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    //int arr3[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int l = sizeof(arr3) / sizeof(arr3[0]);

    findCommon(arr1, arr2, arr3, n, m, l);
    return 0;
}
