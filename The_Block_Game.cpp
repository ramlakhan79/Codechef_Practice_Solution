#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int temp=n;
	    int rem=0,sum=0;
	    while(temp!=0){
	        rem=temp%10;
	        sum=sum*10+rem;
	        temp=temp/10;
	    }
	    if(n==sum){
	        cout<<"wins"<<endl;
	    }
	    else{
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
