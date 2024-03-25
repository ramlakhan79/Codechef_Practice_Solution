#include <bits/stdc++.h>
using namespace std;
// #define max(a,b) a>b?a:b;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int balance=0;
	    int maxbal=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='('){
	            balance=balance+1;
	        }
	        else{
	            balance=balance-1;
	        }
	        maxbal=max(maxbal,balance);
	    }
	    string str="";
	    for(int i=0;i<maxbal*2;i++){
	        if(i<maxbal)
	            str+='(';
	        else
	            str+=')';
	    }
        cout<<str<<endl;
	    
	}
	return 0;
}
