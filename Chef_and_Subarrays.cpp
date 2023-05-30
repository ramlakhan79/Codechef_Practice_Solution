#include <iostream>
#include <vector>

using namespace std;

long long countSubarrays(vector<int>& arr, int n) {
    long long count = 0;
    
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        long long product = 1;
        
        for (int j = i; j < n; j++) {
            sum += arr[j];
            product *= arr[j];
            
            if (sum == product) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long long result = countSubarrays(arr, n);
        cout << result << endl;
    }
    
    return 0;
}
