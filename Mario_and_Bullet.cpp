/* Problem :-  Mario's bullet moves at X pixels per frame. He wishes to shoot a goomba standing Y pixels away from him. The goomba does
               not move. Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after
               at least Z seconds from now.
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
	    if(y%x==0 && z>y/x){
	        cout<<z-(y/x)<<endl;
	    }
	    else if(z<=y/x){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<y/x<<endl;
	    }
	}
	return 0;
}