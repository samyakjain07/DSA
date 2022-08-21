#include <iostream>
#include <cstring>
using namespace std;

string lcs(string x, string y , int n,int m){

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
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            
        }
    }

    int i = n, j = m;
	string lcs = ""; // store charecter when it is equal in the table 
	while (i > 0 && j > 0) {
		if (x[i - 1] == y[j - 1]) {
			lcs += x[i - 1]; // insert in string 
			i--, j--;
		}
		else {
			if (dp[i][j - 1] > dp[i - 1][j])
				j--; // move to the larger side 
			else
				i--;
		}
	}
	reverse(lcs.begin(), lcs.end()); // at last reverse the string to get LCS 

	return lcs;
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