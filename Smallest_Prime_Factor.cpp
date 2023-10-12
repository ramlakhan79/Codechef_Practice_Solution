#include<iostream>
using namespace std;

int smallestPF(int x){
    if(x<=3)
        return x;
    else{
        for(int i=2;i<x;i++){
            if(x%i==0){
                return i;
            }
        }
        return x;
    }
}

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<(smallestPF(i))<<" ";
    }
}
