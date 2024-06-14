#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int torch=0;
        if(k==1){
            torch=1;
        }
        if(n%4==0 && !torch){
            cout<<"Off"<<endl;
        }
        else if(n%4!=0 && !torch){
            cout<<"On"<<endl;
        }
        else if(n%4==0 && torch){
            cout<<"On"<<endl;
        }
        else{
            cout<<"Ambiguous"<<endl;
        }
        
    }
}
