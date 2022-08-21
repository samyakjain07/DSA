#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    stack<int> st;
    vector<int> v;

    int arr[] = { 4, 5, 2, 34 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // st.push(arr[0]);
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            v.push_back(-1);
        }

        else if(st.size()>0 and st.top()>=arr[i]){
            v.push_back(st.top());
            
        }
        else if(st.size()>0 and st.top()<=arr[i]){

            while(st.size()>0 and st.top()<=arr[i]){
                st.pop();
            }
            if(st.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
            
        }

        st.push(arr[i]);

    }

    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout << *ir << " ";
    

}
