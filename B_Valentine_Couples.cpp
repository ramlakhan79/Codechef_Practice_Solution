#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int brr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>brr[i];
	    }
	    int res=INT_MIN;
	    sort(arr,arr+n);
	    sort(brr,brr+n);
	    for(int i=0,j=n-1;i<n && j>=0;i++,j--){
	       int sum=arr[j]+brr[i];
	       if(res<sum){
	           res=sum;
	       }
	    }
	    cout<<(res)<<endl;
	}

}
