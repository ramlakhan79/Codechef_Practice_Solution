#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	    float car1=x1/y1;
	    float car2=x2/y2;
	    if(car1>car2){
	        cout<<-1<<endl;
	    }
	    else if(car1<car2){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}
