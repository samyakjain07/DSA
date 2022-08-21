//Count pairs with given sum

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1,1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=2;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count++;

            }
        }
    }
    cout<<count;
}
