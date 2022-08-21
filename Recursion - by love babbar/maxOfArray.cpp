#include<iostream>
using namespace std;

int maxArray(int arr[] ,int idx){

    if(idx == 10 - 1){
        return arr[idx];
    }
    
    int ans = maxArray(arr ,idx+1);

    if(ans>arr[idx]){
        return ans;
    }
    return arr[idx];
}

int main(){
    int arr[]={2,11,3,78,655,435,36,36,56,87};
    int max = maxArray(arr ,0);
    cout<<max<<endl;
}
