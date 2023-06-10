#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int res=0;
	    int arr[]={100,50,10,5,2,1};
	    
	    for(int i=0;i<6;i++){
	        if(n%arr[i]==0){
	            res+=n/arr[i];
	            break;
	        }
	        else{
	            res+=n/arr[i];
	            n=n%arr[i];
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
