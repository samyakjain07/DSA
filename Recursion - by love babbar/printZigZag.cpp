#include<iostream>
using namespace std;

void printZigzag(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printZigzag(n-1);
    cout<<n<<" ";
    printZigzag(n-1);
    cout<<n<<" ";
    

}
int main(){
    printZigzag(3);
}

// refer to links for photo in mobile