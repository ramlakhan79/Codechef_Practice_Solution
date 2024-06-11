#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,h;
	    cin>>x>>h;
	    int turns=0;
	    int d=x/2;
	    int temp=0;
	    int i=0;
	    while(i<5){
	        temp+=d;
	        i++;
	        if(temp>=h){
	            turns=i;
	            break;
	        }
	        
	    }
	    if(turns==0){
	        turns+=5;
	        int sum=h-d*5;
	        turns+=sum/x+(sum%x!=0?1:0);
	    }
	    cout<<turns<<endl;
	}

}
