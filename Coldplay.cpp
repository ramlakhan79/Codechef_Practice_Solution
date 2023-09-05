/*  

Chef is a big fan of Coldplay. Every Sunday, he will drive to a park taking 
M minutes to reach there, and during the ride he will play a single song on a loop. Today, he has got the latest song which is in total 
S minutes long. He is interested to know how many times will he be able to play the song completely.

*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,s;
	    cin>>m>>s;
	    cout<<m/s<<endl;
	}
	return 0;
}
