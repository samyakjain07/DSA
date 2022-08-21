#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int arr[n][n];
    
    for(int line=0 ; line<n ;line++ ) {
        for(int i=0; i<=line; i++){
            if(i==line || i==0){
                arr[line][i] = 1;
            }
            else{
                arr[line][i] = arr[line-1][i-1] + arr[line-1][i] ; 
                
            }
            cout<< arr[line][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}