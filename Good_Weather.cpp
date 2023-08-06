#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int arr[7];
	    int s_Day=0,r_Day=0;
	    for(int i=0;i<7;i++){
	        cin>>arr[i];
	        if(arr[i]==1)
	            s_Day++;
	        else
	            r_Day++;
	    }
	    if(s_Day>r_Day)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;;
	}
	return 0;
}
