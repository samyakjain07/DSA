// it is a correct code just run it in online gdbcompiler
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    // stack < pair<int,int> > st;
    stack<pair<int, int> > st;
    vector<int> v;

    int arr[] = { 100,80,60,70,60,75,85 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // st.push(arr[0]);
    for(int i=0;i<n;i++){
        if(st.empty()){
            v.push_back(-1);
        }

        else if(st.size()>0 and st.top().first >=arr[i]){
            v.push_back(st.top().second);
            
        }
        else if(st.size()>0 and st.top().first<=arr[i]){

            while(st.size()>0 and st.top().first <=arr[i]){
                st.pop();
            }
            if(st.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top().second);
            }
            
        }

        st.push({ arr[i], i });//storing nearest greatest value and its index in pair

    }

    for(int i=0;i<v.size();i++){
        v[i] = i - v[i];
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    

}
