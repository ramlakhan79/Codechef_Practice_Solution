#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    // (x*3-(n-x)*1)>=p
	    
	    if((x*3-(n-x)*1)>=p){
	        cout<<"PASS"<<endl;
	    }
	    else{
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}
