/*  Chef is hungry and wants to reach home. Chef can travel up to 5 kilometres on 1 litre of fuel on his motorcycle.
    Currently, his motorcycle is filled with X litres of fuel and his home is Y kilometres away.
    Determine whether Chef can reach his home on his motorcycle or not. 
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x*5>=y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
