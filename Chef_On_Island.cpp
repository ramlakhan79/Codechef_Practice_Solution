#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x,y,xr,yr,d;
	    cin>>x>>y>>xr>>yr>>d;		
	    if(min((x/xr),(y/yr))>=d){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
