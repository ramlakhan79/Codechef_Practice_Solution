#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b;
	    cin>>b;
	    string s;
	    float tp=0,aper=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='1'){
	            tp++;
	        }
	    }
	    aper=(((120-b)+tp)*100)/120;
	    if(aper>=75){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
