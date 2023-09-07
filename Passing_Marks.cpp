/*

In a class of N students, a class test was held. The ith student scored Ai​
marks. It is also known that the scores of all students were distinct.
A student passes the test if their score is strictly greater than the passing mark. Given that exactly 
X students pass in the test, find the maximum value of the passing mark of the test.


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    
	    cout<<(arr[n-x]-1)<<endl;
	}
	return 0;
}
