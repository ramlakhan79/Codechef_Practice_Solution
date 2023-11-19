#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[100][100]={0};
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<=i;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    int sum[100][100]={0};
	    for(int j=0;j<n;j++)
	    {
	        sum[n-1][j]=arr[n-1][j];
	    }
	    for(int i=n-2;i>=0;i--)
	    {
	        for(int j=0;j<n;j++)
	        {
	            sum[i][j]=arr[i][j]+max(sum[i+1][j],sum[i+1][j+1]);
	        }
	    }
	    cout<<sum[0][0]<<endl;
	}
	return 0;
}
