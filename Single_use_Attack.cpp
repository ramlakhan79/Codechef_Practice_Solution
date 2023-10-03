#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int h,x,y;
	    std::cin >> h>>x>>y;
		
	    int attack=0;
	    h=h-y;
	    attack++;
	    
	    while(h>0)
	    {
	        h=h-x;
	        attack++;
	    }
	    
	    
	    std::cout << attack << std::endl;
	    
	}
	
	return 0;
}
