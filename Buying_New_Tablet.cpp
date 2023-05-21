#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b,n;
	    cin>>n>>b;
	    
	    int w[n],h[n],p[n],temp[n];
	    for(int i=0;i<n;i++){
	        cin>>w[i]>>h[i]>>p[i];
	    }
	    int ans=0,res;
	    for(int i=0;i<n;i++){
	        if(b>=p[i]){
	            temp[i]=w[i]*h[i];
	        }
	        else{
	            temp[i]=0;
	        }
	    }
	   
	    sort(temp, temp+n);
	   
	  
	    if(temp[n-1]==0){
	        cout<<"no tablet"<<endl;
	    }
	    else{
	        cout<<temp[n-1]<<endl;
	    }
	}
	return 0;
}
