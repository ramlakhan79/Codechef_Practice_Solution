#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string A="";
	    string B="";
	    string temp="";
	    for(int i=0;i<n;i++){
	        if(i>=0 && i<n/2)
	            A+=s[i];
	        else
	            B+=s[i];
	    }
	    temp=B+A;
	    if(temp==s)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
