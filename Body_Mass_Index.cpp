#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float m,h;
	    cin>>m>>h;
	    float bmi=(m)/(h*h);
	    if(bmi<=18)
	        cout<<1<<endl;
	    else if(bmi>18 && bmi<=24)     
	        cout<<2<<endl;
	    else if(bmi>24 && bmi<=29)     
	        cout<<3<<endl;
	    else if(bmi>=30)      
	        cout<<4<<endl;
	}
	return 0;
}
