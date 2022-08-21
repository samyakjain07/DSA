#include <iostream>
// #include <bits/stdc++.h>
// #include<algorithm>

using namespace std;

int main()
{
    
    int a[] = {1,9,3,10,4,20,2};
    
    sort(a, a + 7);
    int max1 = 1 , count = 1;
    
    for(int i =0 ;i<=7;i++){
        
        if(a[i] + 1 == a[i+1]){
            count  = count + 1;
            // cout << count << " ";
        }
        else{
            
            max1 = max(count ,max1);
            // cout << max1 << endl;
            count = 1;
        }
    }
    cout<< max1 << " ";

    return 0;
}