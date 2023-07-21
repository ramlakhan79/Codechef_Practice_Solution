#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
		
	    int ab,ba;
	    
	    ab=(500-x*2)+(1000-(x+y)*4);
	    ba=(1000-y*4)+(500-(x+y)*2);
	    
	    if(ab>ba)
	        cout<<ab<<endl;
	    else
	        cout<<ba<<endl;
	}
	return 0;
}
