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
	    int maxi=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for (int i = 0; i < n; i++) {
            int start=i;
            for (int j = i; j < n; j++) {
                int end=j;
                int sum=0;
                int cnt=0;
                for (int k = start; k <=end; k++) {
                    sum+=arr[k];
                    cnt++;
                }
                if(sum%2==0)
                    maxi=max(maxi,cnt);
            }
        }
        cout<<maxi<<endl;
	}

}
