#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    int ans = 0;
    map<string, int> freq;

    for (int i = 0; i < n; ++i) {
        string temp = "";
        for (int j = i; j < n; ++j) {
            temp += s[j];
            freq[temp]++;
            if (freq[temp] >= 2) {
                ans = max(ans, (int)temp.size());
            }
        }
    }

    cout << ans << endl;
    return 0;
}
