#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> g1;

	int x[3][3] = {{0,1,4}, {2,6,3}, {4,5,7}};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
            g1.push_back(x[i][j]);

		}
	}
    sort(g1.begin(), g1.end());
    cout<<"Median is "<<g1.size()/2<<endl;

	return 0;
}

