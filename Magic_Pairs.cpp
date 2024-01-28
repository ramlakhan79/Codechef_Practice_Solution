#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    int arr[n];
	    int cnt=0;
		
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<((n-1)*(n))/2<<endl;
	}

}
