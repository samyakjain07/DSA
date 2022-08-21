#include<iostream>
#include<vector>
using namespace std;

void removeDuplicate(string s){

    if(s.length()==0){
        return ;
    }

    string restOfString = s.substr(1);
    
    if(s[0] != s[1]){
        cout<<s[0];
    }
    removeDuplicate(restOfString); 
  
    
}

int main(){
    string s = "aaaabbbbccccddddeeee";
    removeDuplicate(s);
}