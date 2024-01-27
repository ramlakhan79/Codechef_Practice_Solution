#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int res=0,k=1;
		
	    while(n>0){
	        if(n>=k){
	            res++;
	        }
	        n-=k;
	        k++;
	    }
	    cout<<res<<endl;
	}
	return 0;

}
