#include <iostream>
#include <map>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        map<int,string> m ({{a,"A"},{b,"B"},{c,"C"}});
        cout << (m.rbegin()->first>50?m.rbegin()->second:"NOTA") << endl;
    }
    return 0;
}
