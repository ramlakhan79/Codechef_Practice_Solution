/*  

Chefland has 2 different types of coconut, type A and type B. Type A contains only xa  milliliters of coconut water and type B contains only xb​
grams of coconut pulp. Chef's nutritionist has advised him to consume Xa milliliters of coconut water and Xb
grams of coconut pulp every week in the summer. Find the total number of coconuts (type A + type B) that Chef should buy each week to keep himself active in the hot weather.

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x_a,x_b,X_a,X_b;
	    cin>>x_a>>x_b>>X_a>>X_b;
	    cout<<(X_b/x_b)+(X_a/x_a)<<endl;
	}
	return 0;
}
