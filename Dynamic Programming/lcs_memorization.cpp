#include <iostream>
#include <cstring>
using namespace std;

int dp[100][100];

int lcs(string x, string y , int n,int m){
    if(n==0 || m==0){
        dp[n][m] =  0;
    }
    if(dp[n][m] != -1){
        return dp[n][m] ; 
       
    }
    if(x[n-1] == y[m-1]){
        dp[n][m] = 1 + lcs(x,y,n-1,m-1);
    }
    else{
        dp[n][m] = max(lcs(x,y,n,m-1) , lcs(x,y,n-1,m ) );
    }
    return dp[n][m] ;
}



int main()
{
    string X = "abcftu";
    string Y = "actuy";
	int n = X.length(), m = Y.length();

	memset(dp, -1, sizeof(dp)); // intialize the whole dp matrix with -1; // from memset we can initialise either -1 and zero;

	cout << lcs(X, Y, n, m) << endl;
	return 0;
    
}