#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,a,b;
	    cin>>m>>a>>b;
	    int temp=min(abs(m-a),abs(abs(m-a)-b));
	    cout<<temp<<endl;
	}
	return 0;
}
