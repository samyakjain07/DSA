#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &v , int temp){
    
    if(v.size()==0 || v[v.size() - 1] > temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    
    insert(v,temp);
    v.push_back(val);
    
    return;    
    
}

void sort(vector<int> &v){
    if(v.size()==1){
        return ;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
}


int main(){
    vector<int> v = {1,11,3,9,4,6,8,5,2};
    sort(v);
    
    for (auto i = v.rbegin(); i != v.rend(); ++i)
        cout << *i << " ";
}