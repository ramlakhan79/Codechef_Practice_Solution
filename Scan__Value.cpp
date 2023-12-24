
#include <iostream>

using namespace std;

int main()
{
    int arr[3][4];
    for(int i=0;i<3*4;i++){
        cin>>arr[i/4][i%4];
    }
    for(int i=0;i<3*4;i++){
        cout<<arr[i/4][i%4]<<" ";
        if(i%4==0){
            cout<<endl;
        }
        
        // for(int j=0;j<4;j++){
        //     cout<<arr[i][j]<<" ";
        // }
        // cout<<endl;
    }

    return 0;
}
