#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,p,q;
	    cin>>x>>y>>p>>q;
		
	    if((x+p*10)<(y+q*10)){
	        cout<<"Chef"<<endl;
	    }
	    else if((x+p*10)>(y+q*10)){
	        cout<<"Chefina"<<endl;
	    }
	    else{
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
