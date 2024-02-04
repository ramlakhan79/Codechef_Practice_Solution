#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res=0;
        char ch;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                ch=s[i];
                i+=1;
                res++;
            }
            else if(ch==s[i]){
                continue;
                
            }
        }
        cout<<n-(res)<<endl;
    }
}
