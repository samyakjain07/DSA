#include <iostream>
using namespace std;

int main()
{
	string s1,s2,res;
	cin>>s1>>s2;
	cin>>res;
	int l1 = s1.length();
	int l2 = s2.length();
	int l3 = res.length();
	int lr = l1+l2;

	if(l3!=lr){
		cout<<"No";
	}
	else{
		int f = 0;
		int i=0,j=0,k=0;
		while(k<lr){
			if(i<l1 and s1[i]==res[k]){
				i++;
			}
			else if(j<l2 and s2[j]==res[k]){
				j++;
			}
			else{
				f= 1;
				break;
			}
			k++;
		}
		if(i<l1 or j<l2){
		cout<<"no";
		}
		else{
			cout<<"yes";
		}
	}
	
}