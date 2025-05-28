#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int year = stoi(s);
        bool found = false;
        for (int i = 1; i < 4; ++i) {
            string a_str = s.substr(0, i);
            string b_str = s.substr(i);
            int a = stoi(a_str);
            int b = stoi(b_str);
            int sum = a + b;
            if (sum * sum == year) {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
