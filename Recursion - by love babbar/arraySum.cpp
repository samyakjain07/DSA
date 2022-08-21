#include<iostream>
using namespace std;

int Sum(int arr[],int size){
    if(size==1){
        return arr[0];
    }
    int sum  = Sum(arr+1,size-1);
    return sum+arr[0];

}

int main(){

    int arr[] = {2,0,5,9,45};
    int size = 5;
    int ans = Sum(arr,size);

    cout<<"Sum is "<<ans;

}