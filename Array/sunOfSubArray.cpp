#include <iostream>

using namespace std;

int main()
{
    int a[] = {4, 2, -3, 1, 6};
    
    
    for(int i =0;i<5;i++){
        int count =0;
        // cout<<a[i]<<endl;

        for(int j =i;j<5;j++){
            // std::cout << a[j] << std::endl; 
            count = count + a[j];
            }
        cout<< count << endl;
    }
    
    return 0;
}