#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,n;
	    cin>>x>>n;
		
	    if((n%100==0 && x>=n/100) || (n%100!=0 && x>=(n/100)+1)){
	        cout<<"0"<<endl;
	    }
	    else if(n%100==0){
	        cout<<(n/100)-x<<endl;
	    }
	    else{
	        cout<<((n/100)-x)+1<<endl;
	    }
	}
	return 0;
}
