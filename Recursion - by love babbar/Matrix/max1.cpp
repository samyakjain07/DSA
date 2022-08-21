#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x[3][3] = {{1,1,1}, {1,1,3}, {1,1,7}};
    int max1 = 0;
    int index = 0;

	for (int i = 0; i < 3; i++)
	{   
        int count = 0;
		for (int j = 0; j < 3; j++)
		{
			if(x[i][j]==1){
                count = count + 1;
            }
		}
        if(count>max1){
            max1=count;
            index = i;
        }

        
	}   
    cout<<index;

	return 0;
}

