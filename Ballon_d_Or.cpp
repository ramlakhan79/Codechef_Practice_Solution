#include <bits/stdc++.h>
#define cn(n) cin>>n;

using namespace std;

int main() {
  int testcase;
  cn(testcase);

  while(testcase--){
    int num;
    int cnt2=0;
    cn(num);
    while(num--){
      int cnum;
      cn(cnum);
      if(cnum==2){  
        cnt2++;
      }
    }

    if(cnt2%8==0){
      cout<<"YES"<<endl;
    } 
    else{
      cout<<"NO"<<endl;
    }
  }

  return 0;
}
