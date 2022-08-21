#include<iostream>
using namespace std;

int main()
{
    int n = 6;
    for(int i =1;i<=n;i++){

        for(int j =1;j<=n;j++){
           if(i == 1){
               cout<<j<<" ";
           }
           else if(i == n){
               cout<<n+1-j<<" ";
           }
           else if(j==1 ){
               cout<<i<<" ";
           }
           else if(j==n ){
               cout<<n+1-i<<" ";
           }
           else{
               cout<<"  ";
           }
        }
        
    cout<<endl;
    }
    
    return 0;
}
