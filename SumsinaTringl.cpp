#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n";



ll f(ll i,ll j ,  vector<vector<ll>>&arr ,vector<vector<ll>>&dp)
{
    if(i<0 or  i>=arr.size() or j<0 or j>=arr[0].size())
    {
        return -1e9;
    }
    if(dp[i][j]!=-1)return dp[i][j] ; 
    if(i==arr.size()-1)
    {
        return arr[i][j] ; 
    }
    ll first = arr[i][j] + f(i+1, j , arr, dp) ; 
  //  ll third = arr[i][j] + f(i+1 , j-1,arr,dp) ; 
    ll second = arr[i][j] + f(i+1, j+1 , arr  , dp) ; 
    return dp[i][j]= max(first,second ) ; 
  
}


void solve()
{
    ll n ;
    cin>>n; 
    vector<vector<ll>>arr(n,vector<ll>(n,0)); 
    vector<vector<ll>>dp(n,vector<ll>(n,-1));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<=i;j++)
        {
            cin>>arr[i][j] ; 
          //  cout<<arr[i][j]<<" ";
        }
        //cout<<endl;      
    }
    
    ll ans = f(0,0 ,  arr, dp) ;
    cout<<ans<<endl ; 
}

int main()
{
    ll test;
    cin>>test;

    while(test--)
    {
        solve();
    }
    return 0;
}
