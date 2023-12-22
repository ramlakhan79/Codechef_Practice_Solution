#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int ans=0;
		
	    for(int i=1;i<=k;i++){
	        if(i%2!=0){
	            ans+=3;
	        }
	        else{
	            ans-=1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
