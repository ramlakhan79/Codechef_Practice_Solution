#include <bits/stdc++.h>
using namespace std;

#define cn(n) cin>>n;
#define ct(x) cout<<x;

int main() {
	// your code goes here
    int t;
    cn(t);
    for(int k=0;k<t;k++){
        int n;
        cn(n);
        string s;
        cn(s);
        int count=0,j=0,max1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
        }
        max1=count;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                j=i;
            }
            while(j<n && s[j]=='0'){
                j+=1;
                max1=max(max1,(j-i+count));
            }
        }
        ct(max1);
        cout<<endl;

	return 0;
    }
}
