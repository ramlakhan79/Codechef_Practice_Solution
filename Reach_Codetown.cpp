#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    if(isVowel(str[1]) && isVowel(str[3]) && isVowel(str[5]) && ( !isVowel(str[0]) && !isVowel(str[2]) && !isVowel(str[4]) && !isVowel(str[6]) && !isVowel(str[7])  )){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
