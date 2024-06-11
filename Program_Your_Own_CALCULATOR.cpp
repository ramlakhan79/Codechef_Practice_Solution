#include <bits/stdc++.h>
#include <iostream.h>
using namespace std;

int main() {
	// your code goes here
	double a,b;
	char c;
	cin>>a;
	cin>>b;
	cin>>c;
	switch(c){
	    case '+':cout<<(a+b)<<endl;
	        break;
	    case '-':cout<<(a-b)<<endl;
	        break;
	    case '*':cout<<(a*b)<<endl;
	        break;
	    case '/':
	        if(b!=0){
                cout<<fixed<<setprecision(7)<<(a/b)<<endl;
            }
            else{
                cout<<fixed<<setprecision(7)<<"0"<<endl;
            }
	        break;        
	        
	}
	return 0;

}
