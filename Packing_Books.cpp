#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y>z){
	        if(y%z!=0)
	        cout<<(y/z+1)*x<<endl;
	        else
	        cout<<(y/z)*x<<endl;
	    }else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}
