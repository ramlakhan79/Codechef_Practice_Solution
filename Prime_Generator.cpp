#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int checkPrime(ll key){
        if(key <= 1){
            return false;
        }
        if(key==2 || key==3){
            return true;
        }
        if(key % 2 == 0 || key % 3 ==0){
            return false;
        }
        for(int i=5;i<=sqrt(key);i+=6){
            if(key % i == 0 || key % (i+2) ==0){
                return false;
            }
        }
        return true;
    }
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    vector<int> ans;
        for(int i = n; i<=m; i++){
            if(checkPrime(i))
                ans.push_back(i);
        }
	    for(int t:ans){
            cout<<t<<endl;
	    }
	    cout<<endl;
	}
	return 0;
}
