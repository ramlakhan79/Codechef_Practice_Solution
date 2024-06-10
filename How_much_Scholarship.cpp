#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r;
	cin>>r;
	int getSc=0;
	if(r>=1 && r<=50){
	    getSc=100;
	}
	else if(r>=51 && r<=100){
	    getSc=50;
	}
	cout<<getSc<<endl;

}
