#include <iostream>
using namespace std;

bool checkDigit(int n){
    if(n%10==2 || n%10==3 || n%10==9){
        return true;
    }
    else{
        return false;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l,r;
	    cin>>l>>r;
	    int count=0;
		
	    for(int i=l;i<=r;i++){
	        if(checkDigit(i))
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
