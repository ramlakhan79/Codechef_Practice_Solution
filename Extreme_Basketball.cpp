// Extreme Basketball

#include <bits/stdc++.h>
#define cn(a,b) cin>>a>>b;
using namespace std;
int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int A, B;
        cn(A,B);
        int res=0;
        int targetScore=B+10; 

        while(A<targetScore){
            if((targetScore-A)%3==0){
                res+=(targetScore-A)/3;
                break;
            } 
            else{
                res++;
                A+=2;
            }
        }
        cout<<res<<endl;
    }

}
