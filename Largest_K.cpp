#include <bits/stdc++.h>
using namespace std;
int helper(){
    int x,y;
    cin>>x>>y;
    cout<<y/(x-1)<<endl;
    return 0;
    
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return 0;
}
