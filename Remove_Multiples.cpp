#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    long long arr[m];
	    long long temp2=0;
	    for(long long i=0;i<m;i++){
	        cin>>arr[i];
	        temp2+=arr[i];
	    }
	    long long temp1=n*(n+1)/2;
	    cout<<temp1-temp2<<endl;
	    
	}
	return 0;
}
