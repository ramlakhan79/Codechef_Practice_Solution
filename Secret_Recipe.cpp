#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x1,x2,x3,v1,v2;
	    cin>>x1>>x2>>x3>>v1>>v2;
	    if(abs((x2-x3))/v2<abs((x1-x3))/v1){
	        cout<<"Kefa"<<endl;
	    }
	    else if(abs((x2-x3))/v2>abs((x1-x3))/v1){
	        cout<<"Chef"<<endl;
	    }
	    else{
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
