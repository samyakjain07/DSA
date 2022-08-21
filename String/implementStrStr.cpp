#include <iostream>
using namespace std;
int main(){
    string a = "hello";
    string b= "llk";
    int count = 0 ;
    // defining pointer
    int l =0 , m = 0;

    for(int i = 0;i<a.length();i++){
        if(a[l] == b[m]){
            l++;
            m++;
            count++;
        }
        else {
            l++;
        }
    }
    if(count==b.length()){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}