#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    set<char>st;
	    for(int i=0;i<n;i++){
		    if(a[i]!=b[i]){
		        st.insert(b[i]);
		    }
		 }
		 cout<<st.size()<<endl;
	    
	}

}
