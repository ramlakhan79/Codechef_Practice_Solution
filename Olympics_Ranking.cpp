#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int g1,s1,b1,g2,s2,b2;
	    cin>>g1>>s1>>b1>>g2>>s2>>b2;
	    int oneCont=g1+s1+b1;
	    int twoCont=g2+s2+b2;
	    if(oneCont>twoCont){
	        cout<<1<<endl;
	    }
	    else if(oneCont<twoCont){
	        cout<<2<<endl;
	    }
	}
	return 0;
}
