#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	long long  t;
	cin>>t;
	while(t--){
	   long long  n;
	   cin>>n;
	   long long  arr[n];
	   for(long long  i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   long long  a[n];
	   long long  b[n];
	   a[0]=arr[0];
	   for(long long  i=1;i<n;i++){
	       a[i]=__gcd(a[i-1],arr[i]);
	   }
	   b[n-1]=arr[n-1];
	   for(long long  i=n-2;i>=0;i--){
	       b[i]=__gcd(b[i+1],arr[i]);
	   }
	   long long  cnt=0;
	   for(long long  i=0;i<n;i++){
	        if(i==0){
	            if(b[i+1]!=1){
	                cnt++;
	                continue;
	            }
	        }
	        if(i==n-1){
	            if(a[i-1]!=1){
	                cnt++;
	                continue;
	            }
	        }
	        else{
	            if(__gcd(b[i+1],a[i-1])!=1){
	                cnt++;
	                continue;
	            }
	        }
	   }
	   cout<<cnt<<endl;
	   
	}
	return 0;

}
