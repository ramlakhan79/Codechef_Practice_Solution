#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        for (int i = N; i >= 1; i--) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
