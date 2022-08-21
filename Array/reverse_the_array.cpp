#include <iostream>
using namespace std;
 
int main()
{
    //cout << "Hello World!" << endl;
    int a[]={2,3,4,5,6,6};
    int n =6;

    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<endl;
    }
 
    return 0;
}