#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char c1,c2;
	cin>>c1>>c2;
	if(c1==c2)
	    cout<<c1<<endl;
	else if('R'==c1 || 'R'== c2 )    
	    cout<<'R'<<endl;
	else
	    cout<<'B'<<endl;
	return 0;
}
