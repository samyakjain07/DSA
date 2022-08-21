#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    stack<int> st;
    vector<int> v;
    int arr[]= {1,34,98,7,6,3,5};
    int n = 7;
    for(int i = n-1;i<=0;i--){
        if(st.empty()){
            v.push_back(-1);
        }
        else if(st.top()>arr[i] and st.size()>0){
            v.push_back(st.top());
        }

        else if(st.top()<arr[i] and st.size()>0){
            while(st.size()>0 and st.top()<arr[i]){
                st.pop();
            }
            if(st.size()>0 and st.top()>arr[i]){
                v.push_back(st.top());
            }
            else{
                v.push_back(-1);
            }

        }

    }
    for(auto j =v.rbegin();j!=v.rend();j++){
        cout<<*j<<endl;
    }
}