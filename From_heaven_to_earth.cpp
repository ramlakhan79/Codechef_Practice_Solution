#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int  n;
        double v1,v2;
        cin>>n>>v1>>v2;
        double root=1.41421356237;
        if((n*root)/v1<(n*2)/v2){
            cout<<"Stairs"<<endl;
        }
        else{
            cout<<"Elevator"<<endl;
        }
        
    }
}
