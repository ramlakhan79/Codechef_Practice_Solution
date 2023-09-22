#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    int c= b-a;
	    if(c%3==2) cout<<"no"<<endl;
	    else cout<<"yes"<<endl;
	}
	return 0;
}
