#include<iostream>
using namespace std;

int main()
{

for(int i =1;i<=5;i++){

        for(int j =5;j>=i;j--){
        cout<<" ";
        }

        for(int j =1;j<=i;j++){
            if(j%2==0){
                cout<<"*";
                
            }
            
            else{
                
                cout<<((char)(j+97));
            }
        }

        for(int j =2;j<=i;j++){
            cout<<"#";
        }
        
        cout<<endl;
}

}