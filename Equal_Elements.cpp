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
        map<int, int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int max=0;
        for(auto it : mp){
            if(max<it.second)
                max=it.second;
        }
        cout<<n-max<<endl;
    }
	return 0;
}
