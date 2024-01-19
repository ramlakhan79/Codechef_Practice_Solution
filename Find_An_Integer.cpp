#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long x,y;
	    long long res=0;
	    cin>>x>>y;
	    res=x*y-(x+y);
	    if(res<0){
	        res=max(x,y)-1;
	    }
	    if(res==0){
	        res=2;
	    }
	    cout<<res<<endl;
	}

}
