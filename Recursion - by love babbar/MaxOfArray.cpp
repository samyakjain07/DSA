#include<iostream>
using namespace std;
int max(int arr[] ,int idx){
    if(idx==5){
        return arr[idx];
    }  
    
    int restarray = max(arr, idx+1);
    if( restarray >arr[idx]){
       
        return restarray;
    }
    else{
        return arr[idx];
    }
   
   
    
    
}

 int main(){
     int arr[] = {1,2,67,4,4,76};
     int n = 6;

     cout << max(arr,0);
    return 0; 
 }