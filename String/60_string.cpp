#include<iostream>
using namespace std;
int main(){
    string s1 = "abcda";
    string s2 = "dsabc";
    string s3 = s1+s1;
    
    if(s3.find(s2) != string::npos){    //main line
        cout<<"found";
    }
    else{
        cout<<"not found";   
    }
}
