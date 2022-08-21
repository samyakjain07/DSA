
#include<bits/stdc++.h>
using namespace std;
int distance(string s, string w1, string w2){
    
	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		
		if (s[i] == ' ')
		{
			tmp.push_back(str);
			str = "";
		}

		else
			str += s[i];
	}

	tmp.push_back(str);
	
	 int i,m,n;
	for (i = 0; i < tmp.size(); i++){
		if(tmp[i] == w1){
		    //cout<<i<<" ";
		    m=i;
		}
	    
	}
	//cout<<m;
	
	for (i = 0; i < tmp.size(); i++){
		if(tmp[i] == w2){
		    //cout<<i<<" ";
		    n=i;
		}
	    
	}
	//cout<<n;
	return (n-m -1);
}

int main()
{
	string s = "the quick the brown quick brown the frog" ;
    string w1 = "quick";
    string w2 = "frog";
    int n;
    cout << distance(s, w1, w2) << endl;
    return 0;
}

