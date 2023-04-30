#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,k,n;
	    cin>>n>>k>>x>>y;
	    if(x>y && n>k){
	        cout<<k*x+(n-k)*y<<endl;
	    }
	    else if(x<y && n>k){
	        cout<<k*x+(n-k)*x<<endl;
	    }
	    else{
	        cout<<n*x<<endl;
	    }
	}
	return 0;
}
