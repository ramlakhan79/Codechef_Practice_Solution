#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,ch;
	    cin>>s;
		
	    for(int i=0;i<n;i=i+2){
	        if(s[i]=='0' && s[i+1]=='0'){
	            ch=ch+'A';
	        }
	        else if(s[i]=='0' && s[i+1]=='1'){
	            ch=ch+'T';
	        }
	        else if(s[i]=='1' && s[i+1]=='0'){
	            ch=ch+'C';	  
	        }
	        else if(s[i]=='1' && s[i+1]=='1'){
	            ch=ch+'G';	            
	        }
	    }
	    cout<<ch<<endl;
	    
	}
	return 0;
}
