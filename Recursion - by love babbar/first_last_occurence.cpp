#include<iostream>
using namespace std;

int firstOcc(int arr[] ,int n, int i,int key){

    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}

int lastOcc(int arr[],int n ,int i , int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return lastOcc(arr,n,i-1,key);

}
 int main(){
     int arr[] = {1,2,2,4,2,6};
     int n = 6;
     int key =2;
     int i = 0;

     cout<<firstOcc(arr,n , i ,key)<<endl;
     cout<<lastOcc(arr,0 , 6 ,key);


    return 0; 
 }