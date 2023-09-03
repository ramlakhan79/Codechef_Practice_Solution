#include <iostream>
using namespace std;

int main() {
	// your code goes here
	while(true){
	    int n;
	    cin >>n;
	    if(n == 0) break;
	    int a[n], b[n];
	    for(int i=0; i<n; i++){
	        cin >>a[i];
	        b[a[i]-1]=i+1;
	    }
	    bool flag = false;
	    for(int i=0; i<n; i++){
	        if(a[i] != b[i]){
	            flag = true;
	            break;
	        }
	    }
	    if(flag) cout <<"not ambiguous" <<endl;
	    else cout <<"ambiguous" <<endl;
	}
	return 0;
}
