#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        v.push_back(n - 1);
        v.push_back(n - 2);
        for (int i = 1; i <= (n - 3); i++) {
            v.push_back(i);
        }
        if (n - 3 >= 0) {
            v.push_back(n);
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
