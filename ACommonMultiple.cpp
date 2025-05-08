#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> unique_values;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            unique_values.insert(x);
        }
        cout << unique_values.size() << '\n';
    }

    return 0;
}