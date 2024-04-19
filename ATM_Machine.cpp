#include <bits/stdc++.h>
using namespace std;

int withdrow(){
        int n,k;
	    cin>>n>>k;
	    int arr[n];
	    string s="";
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]<=k){
	            s+="1";
	            k=k-arr[i];
	        }
	        else{
	            s+="0";
	        }
	    }
	    cout<<s<<endl;
	    return 0;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    withdrow();
	}
	return 0;
}
