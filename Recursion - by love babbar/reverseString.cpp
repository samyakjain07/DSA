#include<iostream>
using namespace std;

void reversee(string& name,int i ,int j){
    if(i>j){
        return;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    reversee(name,i,j);
}



int main(){
    string name = "Samyak";
    reversee(name,0,name.length()-1);
    cout<<name;
}