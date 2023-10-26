#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    if((n-a)<a)
	        cout<<(n-a)<<endl;
	    else
	        cout<<a<<endl;
	}
	return 0;
}
