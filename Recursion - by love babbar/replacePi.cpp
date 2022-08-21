#include<iostream>
#include<vector>
using namespace std;

void replacePi(string s){

    if(s.length()==0){
        return ;
    }
    
    if(s[0] == 'p' && s[1]== 'i'){
        
        string restOfString = s.substr(2);
        cout<<"3.14";
        replacePi(restOfString);
        
    }
    else{
        string restOfString = s.substr(1);
        cout<<s[0];
        replacePi(restOfString);
        
    }
    
}

int main(){
    string s = "pippxxppijhspixc";
    replacePi(s);
}