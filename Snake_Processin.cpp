#include <iostream>
using namespace std;

bool isValid(string s) {
    int n = s.length();
    
    // Remove all '.' characters from the string
    string sn;
    for (int i = 0; i < n; i++) {
        if (s[i] != '.') {
            sn += s[i];
        }
    }
    
    // Check if the length of the modified string is even
    if (sn.length() % 2 != 0) {
        return false;
    }
    
    // Check the validity of the string
    for (int i = 0; i < sn.length(); i++) {
        if (i % 2 == 0 && sn[i] == 'T') {
            return false;
        } else if (i % 2 != 0 && sn[i] == 'H') {
            return false;
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        if (isValid(s)) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
    
    return 0;
}
