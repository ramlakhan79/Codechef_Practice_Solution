#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
		
	    if(x>y){
	        cout<<(x*2)-1<<endl;
	    }
	    else{
	        cout<<(y*2)-1<<endl;
	    }
	}
	return 0;
}
