#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int freq[26]={0};
	    for(int i=0;i<n;i++)
	    {
	        freq[str[i]-'a']++;
	    }
	    bool flag=true;
	    for(int i=0;i<26;i++)
	    {
	        if(freq[i]%2!=0)
	        {
	            cout<<"NO"<<endl;
	            flag =false;
	            break;
	        }
	    }
	    if(flag==true)
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
