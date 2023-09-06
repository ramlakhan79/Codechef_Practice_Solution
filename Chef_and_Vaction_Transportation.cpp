/*

Vacations have arrived and Chef wants to go to his home in ChefLand. There are two types of routes he can take:
Take a flight from his college to ChefArina which takes X minutes and then take a bus from ChefArina to ChefLand which takes Y minutes.
Take a direct train from his college to ChefLand which takes Z minutes.
Which of these two options is faster?

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x+y)>z){
	        cout<<"TRAIN"<<endl;
	    }
	    else if((x+y)<z){
	        cout<<"PLANEBUS"<<endl;
	    }
	    else{
	        cout<<"EQUAL"<<endl;
	    }
	}
	return 0;
}
