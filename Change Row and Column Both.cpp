/*
here is a 10×10 grid with rows numbered 1 to 10 from top to bottom, and columns 1 to 10 from left to right. Each cell is identified
by a pair (r, c) which means that the cell is located at row  r and column  c.
If Chef's current location is 
(a,b), then in one move Chef can go to 
(c,d) if both of the following are satisfied:
 a≠c & b≠d
Determine the minimum number of moves required to go from (sx ,sy) to (ex ,ey).
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int sx,sy,ex,ey;
	    cin>>sx>>sy>>ex>>ey;
	    if(sx!=ex && sy!=ey){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	}
	return 0;
}
