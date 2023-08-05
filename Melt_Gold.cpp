#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int y,x;
	    cin>>y>>x;
	    int i=1,count=0;
	    for(i;x<y;i++){
	        x=x+i;
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
