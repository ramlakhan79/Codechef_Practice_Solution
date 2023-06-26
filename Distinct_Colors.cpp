#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int A[n];
	    for (int i = 0; i < n; i++) {
	        
	        cin >> A[i];
	    
	        if(A[0]<A[i])
	        {
	            A[0]=A[i];
	        }
	    }
	    cout << A[0] << endl;
	}
	return 0;
}
