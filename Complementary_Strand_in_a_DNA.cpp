/* You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character
A,T,C, and G only. Chef knows that:
A is complementary to T.T is complementary to A.C is complementary to G.G is complementary to C.
Using the string S, determine the sequence of the complementary strand of the DNA. */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;		
	    char s[n],arr[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }		
	    for(int i=0;i<n;i++){
	        if(s[i]=='A')
	        arr[i]='T';
	        else if(s[i]=='T')
	        arr[i]='A';
	        else if(s[i]=='C')
	        arr[i]='G';
	        else if(s[i]=='G')
	        arr[i]='C';
	    }
	    for(int i=0;i<n;i++)
	    cout<<arr[i];
	    cout<<endl;
	}
	return 0;
}
