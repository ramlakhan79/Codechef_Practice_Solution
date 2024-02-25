/* There are 2 stores in Chefland and both sell the same product. The first store sells the product for 100 rupees whereas the second store sells it for 200 rupees.It is the holiday season and both stores have announced a special discount. The first store is providing a discount of A percent on its product and the second store is providing a discount of B percent on its product.Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal? */


#include<iostream>
using namespace std;
int main(){
    	int t;
        cin>>t;	
		while(t--){
			
		    int a,b;
		    cin>>a>>b;
			
		    if(100-((100*a)/100) == 200-((200*b)/100)){
		      cout<<"BOTH"<<endl;
		    } 
		    else if(100-((100*a)/100) >200-((200*b)/100)){
		       cout<<"SECOND"<<endl;
		    }
		    else{
		       cout<<"FIRST"<<endl;;
		    }
		}
}
