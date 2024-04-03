#include <bits/stdc++.h>
#define cn(n) cin>>n;
using namespace std;

int main() {
	// your code goes here
    int t;
    cn(t);
    while(t--){
        long long n, answer = 0;
        cn(n);
        int arr[n];
        for (int i=0;i<n;++i){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i=0;i<n;++i){
            answer+=abs(i-arr[i]);
        }
        cout<<answer<<endl;
    }
}
