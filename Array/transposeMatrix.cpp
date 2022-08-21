#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void transpose(vector<vector<int> > &a){
    
    for(int i = 0 ;i < 3 ;i++){
        for(int j = 0 ;j < i ;j++){
            swap(a[i][j] , a[j][i]);
        }
    }
    
}

int main()
{
    vector<vector<int> > a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(a);
    
    for(int i = 0 ;i < 3 ;i++){
        for(int j = 0 ;j < 3 ;j++){
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
    
}