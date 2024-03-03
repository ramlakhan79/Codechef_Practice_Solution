/*
My Approach : calculate the sum of all enemies and check 
              1) if sum < chef strength, then print 0
              2) else if sum == chef strength, then print minimum enemies
              3) else sort the ememies array and then
                  calculate tsum of each enemies  from last to (when  tsum is not greater than and equal to the chef strength) then print that enemies ;
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,h;
	    cin>>n>>h;
	    int arr[n];
	    int total=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        total+=arr[i];
	    }
	    sort(arr,arr+n);
	    
        if(total<h){
            cout<<"0"<<endl;
        }
        else if(total==h){
            cout<<arr[0]<<endl;
        }
        else{
            int res=0;
            int sum=0;
            for(int i=n-1;i>=0;i--){
    	        sum+=arr[i];
    	        if(sum>=h){
    	            res=arr[i];
    	            break;
    	        }
	        }
	        cout<<res<<endl;
        }
	}
        return 0;

}
