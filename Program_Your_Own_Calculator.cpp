#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	double  a,b;
	char c;
	cin>>a>>b>>c;
	switch(c){
        case '+': cout<<a+b<<endl;
                break;
        case '-': cout<<a-b<<endl;
                break;
        case '*': cout<<a*b<<endl;
                break;
        case '/': cout<<fixed<<setprecision(7)<<(a/b)<<endl;
                break;
	}
	return 0;
}
