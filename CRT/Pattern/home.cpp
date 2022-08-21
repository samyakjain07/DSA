#include<iostream>
using namespace std;

int main()
{
    for(int i =0;i<=7;i++){

        for(int j =0;j<=10;j++){
            if((i==0 && j>0) || (i==2 ) || j== 10 || (i>2 && j==2) || (i>1 && j==0)  || (i==7 && j>0) || (i==1 && j==0) || (i==1 && j==2) ){
                cout<<"*  ";
            }
            
            else{
                cout<<"   ";
            }
            
            
        }
        
    cout<<endl;
    }
    return 0;
}
