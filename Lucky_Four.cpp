#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int cnt=0;
	    for(int i=0;str[i]!='\0';i++){
	        if(str[i]=='4'){
	            cnt++;
	        }
	    }
	    cout<<cnt<<"\n";
	}

}
