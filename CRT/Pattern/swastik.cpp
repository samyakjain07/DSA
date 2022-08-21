#include<iostream>
using namespace std;

int main()
{
    for(int i =0;i<=6;i++){

        for(int j =0;j<=8;j++){
            if(i == 3 || j == 4 || (i<4 && j== 0) || (i>3 && j== 8) || (i==0 && j>4) || (i==6 && j<4)){
                cout<<"* ";
            }
            
            else{
                cout<<"  ";
            }
            
            
        }
        
    cout<<endl;
    }
    return 0;
}
