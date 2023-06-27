#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y,k,res;
	    cin>>x>>y>>k;
	    
	    if(x>=y){
	        if((x-y)%k==0)
	        res=(x-y)/k;
	        else
	        res=((x-y)/k)+1;
	    }
	    else{
	       if((y-x)%k==0)
	       res=(y-x)/k;
	       else
	       res=((y-x)/k)+1;
	}
	
		cout<<res<<endl;
	
}
	return 0;
}
