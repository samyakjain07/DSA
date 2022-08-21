#include <iostream>
using namespace std;

void maxMin(int arr[],int n){
    int b =-1;
    for(int i=0;i<n;i++){
        if(b<arr[i]){
            b=arr[i];
        }
    }
    cout<<"Maximum = " <<b<<endl;

    int c =1000;
    for(int i=0;i<n;i++){
        if(c>arr[i]){
            c=arr[i];
        }
    }
    cout<<"Minimum = " <<c;
}
 
int main()
{
    int a[]={2,3,4,5,6,6};
    int n =6;

    maxMin(a,n);
    return 0;
}