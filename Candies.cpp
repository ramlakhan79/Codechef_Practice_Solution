#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[2*n];
	    int temp=0;
	    for(int i=0;i<2*n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<(2*n)-1;i++){
	        temp=0;
	        for(int j=i;j<2*n;j++){
	            if(arr[i]==arr[j])
	                temp++;
	        }
	         if(temp==3){
	                cout<<"NO"<<endl;
	                break;
	          }   
	    }
	    if(temp<3)
	        cout<<"YES"<<endl;
	   
	}
	return 0;
}
