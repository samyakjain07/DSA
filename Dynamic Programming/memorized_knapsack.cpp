#include <iostream>
using namespace std;
const int D = 1000; // DP - matrix dimension
int t[D][D]; // DP matrix

int Knapsack(int wt[] , int val[] , int W,int n){
    if (n == 0 || W == 0)
		return 0;
    if (t[n][W] != -1)
		return t[n][W];    
    else {
		if (wt[n - 1] <= W)
			t[n][W] = max(val[n - 1] + Knapsack(wt, val, W - wt[n - 1], n - 1),Knapsack(wt, val, W, n - 1));
		else if (wt[n - 1] > W)
			t[n][W] = Knapsack(wt, val, W, n - 1);
		return t[n][W];
	}
}
int main()
{
    int n = 4;
    int val[] = {1,4,5,7};
    int wt[] = {1,3,4,5};
    int Weight = 7;
    for (int i = 0; i <= n; i++)
		for (int j = 0; j <= Weight; j++)
			t[i][j] = -1; // initialize matrix with -1
	cout << Knapsack(wt, val, Weight, n) << endl;
	return 0;
}     