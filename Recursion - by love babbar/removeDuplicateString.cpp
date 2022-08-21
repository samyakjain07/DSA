#include<iostream>
using namespace std;

string removeDuplicat(string s){

    if(s.length()==0){
        return "";
    }
    char ch = s[0];

    string ans =removeDuplicat(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);

    

}
int main(){
    cout<<removeDuplicat('biiiioooonoooood');
    return 0;
}