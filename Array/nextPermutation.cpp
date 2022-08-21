#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void permute(vector<int> &a , int n){
    int k,l;
    for(k=n-2;k>=0;k--){
        if(a[k]<a[k+1]){
            break;
        }
        
    }
    
    if(k<0){
        reverse(a.begin() , a.end());
        
    }
    else{
        for(l=n-1;l>k;l--){
            if(a[l]>a[k]){
                break;
            }
        }
        
        swap(a[k] , a[l]);
        reverse(a.begin()+k+1,a.end());
        
        
    }
    
    
}

int main()
{
    int n;
    cout<<"enter total digit of array ";
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    permute(a,n);
    
    for(auto i : a){
            cout<<i<<" ";
        }
    
    return 0;
    
}