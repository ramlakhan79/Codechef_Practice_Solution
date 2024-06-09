#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long x,y;
	    cin>>x>>y;
	    
	   // while(x!=0){
	   //     if(x>y){
	   //         long long temp=y;
	   //         y=x;
	   //         x=temp;
	   //     }
	   //     else{
	   //         long long temp=x;
	   //         x=(y-x);
	   //         y=temp;
	   //     }
	   // }
	    cout<<__gcd(x,y)<<endl;
	}

}
