#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int doll[n];
	    for(int i=0;i<n;i++){
	        cin>>doll[i];
	    }
	    int ans=doll[0];
	    for(int i=1;i<n;i++){
	        ans^=doll[i];
	    }
	    cout<<ans<<endl;
	    
	}
	
	return 0;

}
