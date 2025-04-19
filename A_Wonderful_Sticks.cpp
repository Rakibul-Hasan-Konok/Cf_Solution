#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t; cin >> t;
    while (t--) {
        ll n; 
        cin >> n;
        string s; 
        cin >> s;
        vector<int> a(n, 0);
        ll l = 1, r = n;

        for (int i = n - 2; i >= 0; --i) {
            if (s[i] == '<' && a[i + 1] == 0) {
                a[i + 1] = l++;
            } else if (s[i] == '>' && a[i + 1] == 0) {
                a[i + 1] = r--;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] == 0) a[i] = l++;
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
