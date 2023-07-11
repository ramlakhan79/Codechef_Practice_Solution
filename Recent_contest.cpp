
#include <iostream>
#define max 10
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ctst[n];
        // string arr[2]={"START38","LTIME108"};
        int st=0,lt=0;
        for(int i=0;i<n;i++){
            cin>>ctst[i];
            if(ctst[i]=="START38")
                st++;
            else if(ctst[i]=="LTIME108")    
                lt++;
        }
        cout<<st<<" "<<lt<<endl;
    }
	return 0;
}
