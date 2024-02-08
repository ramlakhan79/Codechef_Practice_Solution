#include <bits/stdc++.h>
using namespace std;

int isHoleLetter(char ch){
    if(ch=='A' || ch=='D' || ch=='O' || ch=='P' || ch=='Q' || ch=='R'){
        return 1;
    }
    else if(ch=='B'){
        return 2;
    }
    return 0;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int res=0;
	    int size=s.length();
	    for(int i=0;i<size;i++){
	        res+=isHoleLetter(s[i]);
	    }
	    cout<<res<<endl;
	}

}
