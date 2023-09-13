#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a1,a2,b1,b2;
	    cin>>a1>>a2>>b1>>b2;
	    if(((a1-a2)+(b1-b2))<0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
