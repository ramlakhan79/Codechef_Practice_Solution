#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a>b && a<c) || (a>c && a<b)){
	        cout<<a<<endl;
	    }
	    else if((b>a && b<c) || (b>c && b<a)){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<c<<endl;
	    }
	}
	return 0;
}
