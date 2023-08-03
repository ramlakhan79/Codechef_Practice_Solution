#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    float ptrl,digl;
	    ptrl=(n*x)/a;
	    digl=(n*y)/b;
	    if(ptrl>digl)
	        cout<<"DIESEL"<<endl;
	    else if(ptrl<digl)     
	        cout<<"PETROL"<<endl;
	    else
	        cout<<"ANY"<<endl;
	}
	
	return 0;
}
