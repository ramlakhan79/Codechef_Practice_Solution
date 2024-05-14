#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	   // int t=m;
	   long ans=0;
	   long max=0;
	    for(int i=0;i<n;i++){
	      
	       if(arr[i]>m/2){
	            max=abs(arr[i]-1);
	        }
	        else
	            max=abs(arr[i]-m);
	        ans=ans+max;
	       max =0;
	    }
	    cout<<ans<<endl;
	}

}
