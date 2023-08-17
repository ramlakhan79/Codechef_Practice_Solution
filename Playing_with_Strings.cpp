#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,r;
	    cin>>s>>r;
	    int s_one{0},s_zero{0};
	    for(int i=0; i<n; i++){
	        if(s[i]=='1'){
	            s_one++;
	        }
	        else{
	            s_zero++;
	        }
	    }
	    int r_one{0},r_zero{0};
	    for(int i=0; i<n; i++){
	        if(r[i]=='1'){
	            r_one++;
	        }
	        else{
	            r_zero++;
	        }
	    }
	    if(s_one==r_one){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
