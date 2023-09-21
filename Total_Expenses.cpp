#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double q,p;
	    cin>>q>>p;
	    if(q<=1000){
	        cout<<fixed<<(q*p)*1.0<<endl;
	    }
	    else{
	        cout<<fixed<<0.9*(q*p)<<endl;
	    }
	}
	return 0;
}
