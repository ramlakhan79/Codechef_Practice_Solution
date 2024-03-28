/*============================================
My Approach:
step 1: Iterate over the array representing the number of students in each college.
step 2: For each college, check if the number of students is even or odd.
step 3: If the number of students is even, allocate arr[i]/2 rooms to that college.
step 4: If the number of students is odd, allocate (arr[i]/2) + 1 rooms to that college, considering one extra room for the remaining odd student.
step 5: Calculate the total number of rooms allocated across all colleges.
==============================================*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int total_rooms=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total_rooms+=arr[i]%2==0?arr[i]/2:arr[i]/2+1;
        }
        cout<<total_rooms<<endl;
    }
}
