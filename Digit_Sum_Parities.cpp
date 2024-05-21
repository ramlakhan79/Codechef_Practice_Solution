#include <iostream>
using namespace std;

int digitSum(int x){
    int sum=0;        
    while(x>0){
        if(x%10==9)
            sum++;
        else
            break;
        x/=10;    
    } 
    return sum;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int temp=digitSum(n);
	    if(temp%2!=0){
	        cout<<n+2<<endl;
	    }
	    else{
	        cout<<n+1<<endl;;
	    }
	}
	return 0;
}
