#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    x=(x+1)%3;
	    if(x==0){
	        cout<<"SMALL"<<endl;
	    }
	    if(x==1){
	        cout<<"NORMAL"<<endl;
	    }
	    if(x==2){
	        cout<<"HUGE"<<endl;
	    }
	}
	return 0;
}