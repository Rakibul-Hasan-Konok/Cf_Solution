#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int maxVal = 0, bestY = 1;
        for (int y = 1; y < x; ++y) {
            int current = __gcd(x, y) + y;
            if (current > maxVal) {
                maxVal = current;
                bestY = y;
            }
        }

        cout << bestY << endl;
    }
    return 0;
}
