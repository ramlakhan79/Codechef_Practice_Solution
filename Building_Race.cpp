#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		
	    double a,b,x,y;
		
	    cin>>a>>b>>x>>y;
		
	    if(a/(x*1)>b/(y*1)){
	        cout<<"Chefina"<<endl;
	    }
	    else if(a/(x*1)<b/(y*1)){
	        cout<<"Chef"<<endl;
	    }
	    else{
	        cout<<"Both"<<endl;
	    }
	}
	return 0;
}
