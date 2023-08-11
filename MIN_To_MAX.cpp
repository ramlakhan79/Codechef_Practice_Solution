#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    
	    int temp=arr[0];
	    for(int i=0;i<n;i++){
	        if(arr[i]==temp)
	            count++;
	    }
	    cout<<n-count<<endl;
	}
	return 0;
}
