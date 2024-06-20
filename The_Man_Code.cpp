#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int max;
	    int min;
	    if(n==1){
	        max=1;
	        min=1;
	    }
	    else{
	        max=n/2+n%2;
	        if(n%3==0){
    	        min=n/3;
    	    }
    	    else{
    	        min=n/3+1;
    	    }
	    }    
	    cout<<max<<" "<<min<<endl;
	}

}
