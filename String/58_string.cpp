#include<iostream>
#include<map>
using namespace std;

int main(){
    string name = "my name is samyak";
    map<char,int> m;


    for(int i=0;i<name.length();i++){
        m[name[i]]++;
    }
    for(auto it :m){
        if(it.second>1){
            cout<<it.second<<endl;
        }
    }

}