#include <bits/stdc++.h>
#include <iostream.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,v;
	    cin>>n>>k>>v;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    int res=(n+k)*v;
	    int diff=res-sum;
	    if(diff>0 && diff%k==0){
	        cout<<diff/k<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	}

}
