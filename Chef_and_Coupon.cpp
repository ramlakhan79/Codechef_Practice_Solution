#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,c;
	    cin>>d>>c;
	    int a1,a2,a3,b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    
	    int fday=0,secday=0,upfday=0,upsecday=0;
	    fday=a1+a2+a3;
	    
	    if(fday<150){
	        upfday=fday+d;
	    }else{
	        upfday=fday;
	    }
	    secday=b1+b2+b3;
	    
	    if(secday<150){
	        upsecday=secday+d;
	    }else{
	        upsecday=secday;
	    }
	    if(upfday+upsecday+c<fday+secday+2*d){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
