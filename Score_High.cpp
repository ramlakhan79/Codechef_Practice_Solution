#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int na,nb,nc,nd;
	    cin>>na>>nb>>nc>>nd;
	    cout<<max({na,nb,nc,nd})<<endl;
	}
	return 0;
}
