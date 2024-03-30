#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	    int riski_person=0;
	    int non_riski_person=0;
	    int total_days=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]<=9 || arr[i]>=80){
	            riski_person++;
	        }
	        else{
	            non_riski_person++;
	        }
	    }
	    if(riski_person%d==0){
	        total_days+=riski_person/d;
	    }
	    else{
	        total_days+=(riski_person/d)+1;
	    }
	    if(non_riski_person%d==0){
	        total_days+=non_riski_person/d;
	    }
	    else{
	        total_days+=(non_riski_person/d)+1;
	    }
	    cout<<total_days<<endl;
	    
	    
	}

}
