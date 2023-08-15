#include <iostream>
using namespace std;

int display(int x,int y){
    if((x+y)<3)
        return 1;
    else if(3<=(x+y) && (x+y)<=10)        
        return 2;
    else if(11<=(x+y) && (x+y)<=60)        
        return 3;
    else if(60<(x+y))        
        return 4;
}
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    cout<<display(a,b)<<endl;
	}
	
	return 0;
}
