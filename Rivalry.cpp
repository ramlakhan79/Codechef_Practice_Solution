#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r1,r2,d1,d2;
	cin>>r1>>r2>>d1>>d2;
	if((r1+d1)>(r2+d2)){
	    cout<<"Dominater"<<endl;
	}
    else{
        cout<<"Everule"<<endl;
    }
	return 0;
}
