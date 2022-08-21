#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = 5;
    int x = arr[n-1];

    for(i = n-1 ; i>0 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x ;

    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
}