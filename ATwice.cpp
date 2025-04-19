#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> k;
            mp[k]++;
        }

        int ans = 0;
        for (auto u : mp) {
            ans += u.second / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
