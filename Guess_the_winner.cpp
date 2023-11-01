#include <iostream>
using namespace std;


bool isPrime(int n) {
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0){
            return false;
        }
    }
    return true;
}

string dGWinner(int N) {
    if(N%2==0) {
        return "Bob";
    }
    if(isPrime(N)){
        return "Alice";
    }
    for (int p=3;p<=N;p+=2) {
        if (N%p==0 && isPrime(p)) {
            return "Alice";
        }
    }   
    return "Bob";
    
}


int main() {
	// your code goes here
	int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string win=dGWinner(n);
        cout<<win<<endl;
    }

	return 0;
}
