#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    cout<<((n-1)*4-abs(x-y)-abs(n+1-(x+y)))<<endl;
	}
	return 0;
}
