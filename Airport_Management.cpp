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
        int drr[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>drr[i];
            mp[drr[i]]++;
        }
        int maxi=0;
        for(auto ele:mp){
            if(maxi<ele.second){
                maxi=ele.second;
            }
        }
        cout<<maxi<<endl;
        
    }
}
