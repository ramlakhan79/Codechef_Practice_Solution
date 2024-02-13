#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int even_no=0,odd_no=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2==0){
	            even_no++;
	        }
	        else{
	            odd_no++;
	        }
	    }	   
	    
	    if(odd_no%2==0 || n==1)
	        cout<<1<<endl;
	    else
	        cout<<2<<endl;
	    
	}
	return 0;
}
