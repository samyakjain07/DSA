#include<iostream>
using namespace std;

void print1ton(int n){
    if(n<0){
        return;
    }
    cout<<n<<" "; // o/p = 9 8 7 6 5 4 3 2 1 0
    print1ton(n-1);
    cout<<n<<" "; // o/p = 0 1 2 3 4 5 6 7 8 9

}
int main(){
    int n = 9;
    print1ton(n);
}