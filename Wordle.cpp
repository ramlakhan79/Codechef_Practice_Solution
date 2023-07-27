#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string m,s;
	    string gw="";
	    cin>>m;
	    cin>>s;
	    for(int i=0;i<5;i++){
	        if(m[i]==s[i])
	            gw+="G";
	        else
	            gw+="B";
	    }
	    cout<<gw<<endl;;
	    
	}
	return 0;
}
