#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l,b;
	cin>>l>>b;	
	if(l*b>(2*(l+b))) cout<<"Area"<<endl<<l*b; 
 	else if(l*b<(2*(l+b)))cout<<"Peri"<<endl<<2*(l+b);
	else cout<<"Eq"<<endl<<l*b;
	return 0;
}
