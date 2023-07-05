#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        if (A[n - 1] > m) {
            cout << "No" << endl;
        } else if (m == A[n - 1] && k == 1) {
            cout << "Yes" << endl;
        } else if ((m - A[n - 1]) >= (k - 1)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
