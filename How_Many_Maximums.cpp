#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a=0;
	    for(int i=0;i<(n-2);i++){
	        if(s.at(i)=='0' &&  s.at(i+1)=='1')
	            a++;
	    }
	    if(s.at(0)=='1')
	        a++;
	    if(s.at(n-2)=='0') 
	        a++;
	        
	    cout<<a<<endl; 
	}
	return 0;
}
