#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string  s, t, u;
        char ans[n];
        cin>>s>>t>>u;
        
        int temp=0;
        temp=t[0]-s[0];
        if(temp<0){
            temp+=26;
        }
        for(int i=0; i<n; i++){
            if((u[i]+temp)>122)
                ans[i]=96+(u[i]+temp)%122;
            else    
                ans[i]=u[i]+temp;
        }

        for(int i=0; i<n; i++){
           cout<<ans[i];
        }
        cout<<endl;
        
    }
}
