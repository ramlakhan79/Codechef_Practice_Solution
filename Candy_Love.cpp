#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    sort(arr,arr+1);
	    if(sum%2==0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        int max=arr[n-1];
	        if(max>(sum/2))
	            cout<<"NO"<<endl;
	        else
	            cout<<"YES"<<endl;
	    }
	}
	return 0;
}
