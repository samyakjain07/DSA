#include<iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int k ) {
    
    if(start>end){
        return false;
    }
    int mid = start + (end-start)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]< k ){
        return binarySearch(arr,mid+1,end,k);
    }
    else{
        return binarySearch(arr,start,mid-1,k);
    }
    

}

int main() {

    int arr[8] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int key = 12;
    int start = 0;
    int end =7;
    bool ans = binarySearch(arr,start,end,key);

    if(ans ){
        cout << "Present " << endl;
    }
    else{
        cout << "absent " << endl;
    }

    return 0;
}