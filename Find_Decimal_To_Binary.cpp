

#include <iostream>
using namespace std;

string helper(string &str, int n){
    if(n==0){
        return str;
    }
    helper(str,n/2);
    str+=n%2==0?"0":"1";
    return str;
}
int main()
{   
    int n;
    string str="";
    cout<<"Enter a Decimal  Number :: ";
    cin>>n;
    cout<<(helper(str,n));

    return 0;
}
