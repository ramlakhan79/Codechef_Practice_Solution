/*  Chef has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and
    each friend gets even number of candies. Determine whether it is possible to do so.
    NOTE: Chef will not take any candies himself and will distribute all the candies. 
  */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){		
	    int n,m;
	    cin>>n>>m;
		
	    if((n/m)%2==0 && n%m==0){
	        cout<<"Yes"<<endl;
	    }
		    
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
