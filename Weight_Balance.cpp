#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w1,w2;
	    cin>>w1>>w2;
	    int x1,x2;
	    cin>>x1>>x2;
	    int m;
	    cin>>m;
	    
	    if((x1*m)<=(w2-w1) && (w2-w1)<=(x2*m)){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
