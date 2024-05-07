#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int hrr[n];
	    int res=0;
	    for(int i=0;i<n;i++){
	        cin>>hrr[i];
	        if(hrr[i]>k){
	            res++;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;

}
