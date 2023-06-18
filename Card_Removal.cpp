#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    map<int,int>m;
	    for (int i=0; i<N; i++)
	    {
	        cin>>A[i];
	        m[A[i]]++;    //counting the frequency for each distinct element
	    }
	    
	    int freq=0;
	    for(int i=0; i<N; i++)
	    {
	        if(m[A[i]] > freq)
	        freq = m[A[i]];
	    }
	    cout<< (N-freq)<<endl;
	}
	return 0;
}
