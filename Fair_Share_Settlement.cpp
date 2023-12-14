#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double n,k;
	    cin>>n>>k;
	    cout<<(n-(floor(n/(k+1)))*k)<<endl;
	    
	}
	return 0;
}
