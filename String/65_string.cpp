#include <iostream>
using namespace std;
void printSubsequence(string t , int i , int n , string s){
    if(i == n){
        cout<<t<<endl;
    }
    else{
        printSubsequence(t,i+1,n,s);
        t = t+s[i];
        printSubsequence(t,i+1,n,s);

    }

}

int main(){
    string s;
    cin>>s;
    printSubsequence("" , 0 , s.length() , s);

}


