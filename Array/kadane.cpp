#include <iostream>
#include<climits>
using namespace std;

int main()
{

	int ar1[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int m = sizeof(ar1) / sizeof(ar1[0]);
	
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < 8; i++){
        max_ending_here = max_ending_here + ar1[i];
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
        if(max_ending_here < 0){
           max_ending_here = 0;
        }
    }
    cout<<max_so_far;
		
}

