#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int helper(){
    string s;
    cin>>s;
    int flag=1;
    int tmp=0;
    int ans=0;
    int cnt=0;
    
    for(int i=0;i<s.size();i++){
        if(flag==0 && tmp==1){
            if(s[i]=='1'){
                ans=1;
                break;
            }
        }
        else{
            if(s[i]=='1'){
                flag=1;
                tmp=1;
            }
            else{
                flag=0;
                // cnt++;
            }
        }
        if(s[i]=='0'){
            cnt++;
        }
    }
    
    if(ans==1 || cnt==s.size()){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}
