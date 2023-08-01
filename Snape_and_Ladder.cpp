#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b,ls;
	    cin>>b>>ls;
	    cout<<sqrt(ls*ls-b*b)<<" "<<sqrt(ls*ls+b*b)<<endl;
	}
	return 0;
}
