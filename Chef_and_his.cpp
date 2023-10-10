#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int l=s.length();
	    string temp="";
	    for(int i=0;i<l;i++){
	        if(s[i]=='*'){
	            temp+=s[i];
	        }
	        else if(s[i]=='>'){
	            temp+='<';
	        }
	        else if(s[i]=='<'){
	            temp+='>';
	        }
	    }
	    int count=0;
	    for(int i=1;i<l;i++){
	        if(temp[i-1]=='>' && temp[i]=='<'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
