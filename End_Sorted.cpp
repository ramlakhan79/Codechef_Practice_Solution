#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t,n,a,b,num;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;++i){
            cin>>num;
            if(num == 1)
                a = i;
            else if(num == n)
                b = i;
        }
        cout << a + (n-b-1) - (b<a) << endl;
    }
    return 0;
}
