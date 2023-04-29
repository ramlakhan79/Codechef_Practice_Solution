#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int amt;
	    amt=x%10;
	    if(amt>=5){
	        cout<<100-(x/10+1)*10<<endl;
	    }
	    else{
	        cout<<100-(x/10)*10<<endl;
	    }
	}
	return 0;
}
