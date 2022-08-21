#include<iostream>
using namespace std;

int main()
{
    int count =0,j=0,i=0;
    for( i =0;i<=4;i++){
        count = i+j;  
        for(  j =0;j<=i;j++){
            
             cout<<((char)(count+97)) << " ";
            
        }
        
    cout<<endl;
    }
    return 0;
}
