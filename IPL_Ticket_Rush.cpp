#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n>m){
	        cout<<n-m<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
