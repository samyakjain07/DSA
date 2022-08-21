#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 3,3 ,4,9,10 ,1, 5, 6};
    int len = 9;
    
    int count =0;
    for(int i =0;i<8;i++){
        
        if(arr[i]<=arr[i+1]){
            count = count+1;
        }
        else{
            count++;
            break;
        }
    }
    std::cout <<"count = " <<count << std::endl;
    std::cout << len-count << std::endl;
    
    return 0;
}