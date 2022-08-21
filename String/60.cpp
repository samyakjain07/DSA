#include <iostream>
using namespace std;

int main()
{
	string s1,s2,res;
	cin>>s1>>s2;
	
	int l1 = s1.length();
	int l2 = s2.length();
	if(l1!=l2){
		cout<<"No";
	}
	else{
        string l3 = s1+s1;
        if(l3.find(s2)!= string::npos){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    
}