#include <iostream>
using namespace std;

int main(){
    string str = "3322251";
    int len = str.length();
    int count = 1;
    for(int i = 0 ;i<len;i++){
        if(str[i]==str[i+1]){
            count++;
        }
        else{
            cout<<str[i]<<"="<<count<<",";
            count = 1;
        }
    }
}