#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, one=0;
	    string s="";
	    bool k = true;
	    cin>>n;
	    cin>>s;
	    for(int i=0; i<n-1; i++){
	        if(s[i]=='1' && k==true){
	            one++;
	            k=false;
	        }
	        else if(s[i]=='0'){
	            k=true;
	        }
	    }
	    if(k)
	    	cout<<one+1<<endl;
	    else 
	    	cout<<one<<endl;
	}

}
