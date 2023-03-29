/*  Chef is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and 
Z units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights.
If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.  */

#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(w==x || w==y || w==z){
	        cout<<"YES"<<endl;
	    }
	    else if(w==x+y || w==x+z || w==z+y || w==x+y+z){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;;
	    }
	}
	return 0;
}
