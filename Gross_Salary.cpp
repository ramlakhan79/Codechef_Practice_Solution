#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float b_salary,hra,da;
	    cin>>b_salary;
	    
	    if(b_salary<1500){
	        hra=b_salary*0.1;
	        da=b_salary*0.9;
	    }
	    else{
	        hra=500;
	        da=b_salary*0.98;
	    }
	    cout<<fixed<<setprecision(2)<<b_salary+hra+da<<endl;
	    
	}
	return 0;
}
