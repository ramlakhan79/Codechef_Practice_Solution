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
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int i=0;
	    int j=n-1;
	    int res=0;
	    while(i<n/2){
	        res+=arr[j];
	        res=abs(res-arr[i]);
	        i++;
        	j--;
	    }
	    if(n%2!=0){
	        res+=arr[(n/2)];
	    }
	    cout<<res<<endl;
	}

}
