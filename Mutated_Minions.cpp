#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if((arr[i]+k)%7==0)
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
