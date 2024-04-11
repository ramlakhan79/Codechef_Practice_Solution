#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // your code goes here
        sort(arr,arr+n);
        int cnt=0;
        map<int,int>mp;
        for(int ele:arr){
            mp[ele]++;
        }
        int temp=arr[0];
        for(auto x:mp){
            if(cnt<x.second && temp>=x.first){
                cnt=x.second;
            }
        }
        cout<<n-cnt<<endl;
    }

}


