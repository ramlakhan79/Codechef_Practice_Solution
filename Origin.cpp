#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long sum=0;
	    sum=(n/9)*45;
	    long long rem=n%9;
	    sum+=(rem+1)*rem/2;
	    cout<<sum<<endl;
	}
	return 0;
}
