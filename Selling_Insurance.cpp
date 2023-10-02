#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int x;
	    cin>>x;
	    
	    float  comm=0.2*x;
	    int ans=100/comm;
	    float ans1=100/comm;
	    if(ans==ans1)
	        cout<<(100/comm)<<endl;
	    else
	        cout<<int((100/comm)+1)<<endl;
	    
	}
	return 0;
}
