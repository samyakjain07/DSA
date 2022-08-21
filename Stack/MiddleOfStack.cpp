#include<iostream>
#include<stack>
using namespace std;
void deleteMid_util(stack<char> &st ,int size , int current){

    if(current==size/2){
        st.pop();
        return;
    }

    char x = st.top();
    st.pop();
    current+=1;

    deleteMid_util(st,size,current);
    st.push(x);

}
void deleteMid(stack<char>& st ,int size){
    deleteMid_util(st,size,0);
}

int main(){
    
    stack<char> st;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');

    deleteMid(st , st.size());
    while (!st.empty())
    {
        char p=st.top();
        st.pop();
        cout << p << " ";
    }

    return 0 ;

}