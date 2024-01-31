#include <bits/stdc++.h>
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
	    int ncnt=0,ycnt=0,icnt=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='N')
	            ncnt++;
	        else if(s[i]=='Y')
	            ycnt++;
	        else if(s[i]=='I')
	            icnt++;
	    }
	    if(ncnt==n)
	        cout<<"NOT SURE"<<endl;
	    else if(icnt==n || (icnt>0 && ncnt>0))     
	        cout<<"INDIAN"<<endl;
	    else
	        cout<<"NOT INDIAN"<<endl;
	}
	return 0;

}
