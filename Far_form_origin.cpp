#include <iostream>
#include<cmath>
using namespace std;

int sq(int val){
    return val*val;
}
int main() {
	// your code goes here
	int t;
	double x=0,y=0,x1,y1,x2,y2;
	std::cin >> t;
	while(t--)
    {
        std::cin >> x1>>y1>>x2>>y2;
        
        double S1=(x-x1);
        double S2=(y-y1);
        
        double P1=(x-x2);
        double P2=(y-y2);
        
        
        double d1=sqrt(sq(S1)+sq(S2));
        double d2=sqrt(sq(P1)+sq(P2));
        
        
        if(d1<d2)   std::cout <<"Bob" << std::endl;
        else if(d1==d2) std::cout << "Equal" << std::endl;
        else    std::cout << "Alex" << std::endl;
        
       
        
    }	
	return 0;
	
}
