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
	    int mx=0;
	    int cd=0;
	    vector<int>v;
		
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        mx=max(mx,arr[i]);
	        v.push_back(mx);
	        if(v[i]>arr[i]){
                cd++;
            }
	    }
        cout <<cd<< endl;
	}
}
