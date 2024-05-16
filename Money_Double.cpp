#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int res=0;
	    if(x<1000 && y>1){
	        res=(x+1000)*(pow(2,y-1));
	    }
	    else if(x<1000 && y==1){
	       res=(x+1000); 
	    }
	    else{
	       res=x*(pow(2,y));
	    }
	    cout<<res<<endl;
	}

}
