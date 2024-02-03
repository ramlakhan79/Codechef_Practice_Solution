#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
		
	    for (int i=1;i<n;i++){
	        if(s[i-1]==s[i]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
