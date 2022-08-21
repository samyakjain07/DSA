#include<iostream>
using namespace std;
bool palindrome(string& name,int i ,int j){
    if(i>j){ 
        return true;
    }
    if(name[i]==name[j]){
        i++;
        j--;
        return palindrome(name,i,j);   
    }
    else{
        return false;
    }    
}
int main(){
    string name = "12321";
    bool ans = palindrome(name,0,name.length()-1);
    if(ans ){
        cout << "its a pallindrome " << endl;
    }
    else{
        cout << "not a pallinddrome " << endl;
    }
}