#include <iostream>
using namespace std;

bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}

void printSubstrings(string str)
{

	for (int i = 0; i < str.length(); i++) {
		string subStr;

		for (int j = i; j < str.length(); j++) {
			subStr += str[j];

            if(isPalindrome(subStr)==true){
                string a = subStr;
                int len = subStr.length();


            }
            int max =(subStr,max);
            cout<<isPalindrome(subStr)<<" "<<subStr<<endl;
			
		}
	}
}
int main()
{
	string str = "abcdcba";
	printSubstrings(str);
	return 0;
}

