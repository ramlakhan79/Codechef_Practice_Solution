/*  The Chessboard Distance for any two points (X1 ,Y1 ) and (X2 ,Y2 ) on a Cartesian plane is defined as max(∣X1 −X2 ∣,∣Y1 −Y2 ∣).
    You are given two points (X1 ,Y1 ) and (X2 ,Y2 ). Output their Chessboard Distance.Note that, ∣P∣ denotes the absolute value of integer 
    P. For example, ∣−4∣=4 and ∣7∣=7.  */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,x2,y1,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int max_d;
	    max_d=max(abs(x1-x2),abs(y1-y2));
	    cout<<max_d<<endl;
	}
	return 0;
}
