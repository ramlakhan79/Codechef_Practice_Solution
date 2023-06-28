#include <iostream>
using namespace std;

int main() {
	int n; 
	cin >> n;
	int p1 = 0, p2 = 0; 
	int maxi = 0; 
	int lead = 0;  
	while(n--){
	    int score1, score2; 
	    cin >> score1 >> score2;
	    p1 += score1;
	    p2 += score2;
	    int z = abs(p1 - p2);
	    if(z > maxi){ 
	        maxi = z;
	        if(p1 > p2){ 
	        lead = 1;
	        }   
	        else{
	        lead = 2;
	        }
	    }
	    
	}
	cout << lead << " " << maxi <<endl;
	return 0;
}
