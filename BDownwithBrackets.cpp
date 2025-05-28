#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool canBreak = false;
        for (int i = 1; i < n; ++i) {
            if (s[i] == ')' && s[i - 1] == ')') {
                canBreak = true;
                break;
            }
        }

        if (canBreak) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
