#include <iostream>
#include <cstring>
using namespace std;

int lcs(string x, string y , int n,int m){

    int dp[n + 1][m + 1];

    for(int i =0 ; i<= n ;i++){
        for(int j =0 ;j<=m ; j++){
            if (i == 0 || j == 0)
				dp[i][j] = 0;
        }
    }

    for(int i =1 ; i<= n ;i++){
        for(int j =1 ;j<=m ; j++){

            if (x[i - 1] == y[j - 1]) 
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else 
				dp[i][j] = 0;
            
        }
    }

    int mx = INT_MIN;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			mx = max(mx, dp[i][j]);

	return mx;
}



int main()
{
    string X = "abcftu";
    string Y = "actuy";
	int n = X.length(), m = Y.length();

	// memset(dp, -1, sizeof(dp)); // intialize the whole dp matrix with -1; // from memset we can initialise either -1 and zero;

	cout << lcs(X, Y, n, m) << endl;
	return 0;
    
}