#include<iostream>
#include<string>
using namespace std;

void reversee(string s){

    if(s.length()==0){
        return;
    }
    string restOfString = s.substr(1);
    reversee(restOfString);
    cout<<s[0];
}

int main(){
    string s = "binod";
    reversee(s);
}