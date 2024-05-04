#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, m;
        cin >> s >> m;

        string res="";

        for (int i = 0; i <5; i++) {
            if (s[i] == m[i]) {
                res+= 'G';
            } else {
                res+= 'B';
            }
        }

        cout << res << endl;
    }

    return 0;
}
