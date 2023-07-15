#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r,o,c;
	cin>>r>>o>>c;
	if(((20-o)*36+c)>r){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
