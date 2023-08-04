#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,z,x,y;
	    cin>>d>>z>>x>>y;
	    if(z*7<(x*d+y*(7-d)))
	        cout<<(x*d+y*(7-d))<<endl;
	    else
	        cout<<z*7<<endl;
	}
	return 0;
}
