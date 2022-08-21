#include<iostream>
using namespace std;

void printPermutation(string s , string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        string left = s.substr(0,i);
        string right = s.substr(i+1);
        string ros = left+right;
        printPermutation(ros,ans + ch);
    }
}
int main(){
    string s = "abcde";
    printPermutation(s,"");
}