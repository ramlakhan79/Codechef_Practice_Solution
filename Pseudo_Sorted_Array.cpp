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
	    bool flag=true;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=1;i<n;i++){
	        if(arr[i]>=arr[i-1]){
	            continue;
	        }    
	        else{
	            int temp=arr[i];
	            arr[i]=arr[i-1];
	            arr[i-1]=temp;
	            break;
	        }
	    }
	    for(int i=1;i<n;i++){
	        if(arr[i]<arr[i-1]){
	            flag=false;
	        }    
	        
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
