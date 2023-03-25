/* Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special. Chef has a total of X rupees and one chocolate costs Y rupees. What is the maximum number of chocolates Chef can buy? */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<(x/y)<<endl;
	}
	return 0;
}
