#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int hd,ts;
	    float cc;
	    cin>>hd>>cc>>ts;
	    if(hd>50 && cc<0.7 && ts>5600)
	        cout<<"10"<<endl;
	    else if(hd>50 && cc<0.7)     
	        cout<<"9"<<endl;
	    else if(cc<0.7 && ts>5600)
	        cout<<"8"<<endl;
	    else if(hd>50 && ts>5600)
	        cout<<"7"<<endl;
	    else if(hd>50 || cc<0.7 || ts>5600)
	        cout<<"6"<<endl;
	    else
	        cout<<"5"<<endl;
	}
	return 0;
}
