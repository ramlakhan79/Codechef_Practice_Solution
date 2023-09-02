/*

Chef has two integers X and Y. Chef wants to perform some operations to make X and Y equal. In one operation, Chef can either:
set :=X+1 
or set Y:=Y+2
Find the minimum number of operations required to make X and Y equal.

*/



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
	        if((x-y)%2==0){
	            cout<<(x-y)/2<<endl;
	        }
	        else{
	            cout<<(x+1-y)/2+1<<endl;
	        }
	    }
	    else if(x<y){
	        cout<<(y-x)<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
