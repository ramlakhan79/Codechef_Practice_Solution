/*
Chef is playing badminton today. The service rules of this singles game of badminton are as follows:
1. The player who starts the game serves from the right side of their court.
2. Whenever a player wins a point, they serve next.
3. If the server has won an even number of points during a game, then they will serve from the right side of the service court for the subsequent point.
Chef will be the player who begins the game.

Given the number of points P obtained by Chef at the end of the game, please determine how many times Chef served from the right side of the court.
Please see the sample cases below for explained examples.

*/

#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    cout<<p/2+1<<endl;
	}
	return 0;
}
