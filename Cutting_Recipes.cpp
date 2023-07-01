#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // int Gcd=0;
        int Gcd=arr[0];
        for(int i=1;i<n;i++){
            Gcd=gcd(Gcd,arr[i]);
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]/Gcd<<" ";
        }
        cout<<"\n";
    }
    
	// your code goes here
	return 0;
}
