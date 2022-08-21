#include <iostream>
using namespace std;
bool pallindrome(string str){
    int first = 0;
    int last = str.length()-1;

    for(int i=0;i<str.length();i++){
        if(first<=last and str[first]==str[last]){
            
            first++;
            last--;
        }
        
    }
    if(first>=last){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string str = "namman";
    cout<<pallindrome(str);
}
