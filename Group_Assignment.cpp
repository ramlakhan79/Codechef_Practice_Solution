#include <iostream>
using namespace std;

int main() {
	//  each pair sum equal 2*n + 1 
	int T;
	cin >> T ;
	
	while (T--) {
	    int N, X ;
	    cin >> N >> X ;
	    cout << 2*N + 1 - X << endl ;
	}
	return 0;
}
