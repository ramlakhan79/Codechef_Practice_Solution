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
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    int cnt=1;
	    for(int i=0;i<n;i++){
	       if(mp[arr[i]]%arr[i]!=0){
	           cnt=0;
	       }
	    }
	    
	    if(cnt){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}

}
