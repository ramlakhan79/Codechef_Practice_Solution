#include <bits/stdc++.h>
#define cn(n) cin>>n
#define cnstr(s) cin>>s
#define ct(ans) cout<<ans<<endl
using namespace std;

int minOperations(string str){
    int n = str.length();
    int calculate0=0;
    int calculate1=0;
    for(int i=0;i<n;){
        char curr=str[i];
        int k=i;
        while(k<n && str[k]==curr){
            ++k;
        }
        if(curr=='0'){
            ++calculate0;
        } else {
            ++calculate1;
        }
        i=k;
    }

    return min(calculate0, calculate1);
}

int main() {
    int t;
    cn(t);
    vector<int>answers;
    answers.reserve(t);
    while(t--){
        int n;
        cn(n);
        string s;
        cnstr(s);
        answers.push_back(minOperations(s));
    }
    for(int answer:answers){
        ct(answer);
    }
    
    return 0;
}
