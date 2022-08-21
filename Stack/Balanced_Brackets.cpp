#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> st;
    bool ans = false;
    string s ;
    cin>>s;
    for(int i = 0 ; i<s.size() ; i++){
        
        if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')' and st.top()=='('){
            st.pop();
        }
        else if(s[i]=='}' and st.top()=='{'){
            st.pop();
        }
        else if(s[i]==']' and st.top()=='['){
            st.pop();
        }
    }
    if(st.empty()){
        cout<<"balanced ";
    }
    else{
        cout<<"unbalanced ";

    }
    cout<<ans;
    

}
