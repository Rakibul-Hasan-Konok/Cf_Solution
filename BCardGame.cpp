#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> suneet(2), slavic(2);
        cin >> suneet[0] >> suneet[1] >> slavic[0] >> slavic[1];

        int wins = 0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int s1 = suneet[i], s2 = suneet[1 - i];
                int l1 = slavic[j], l2 = slavic[1 - j];
                int sWin = 0, lWin = 0;

                if (s1 > l1) sWin++;
                else if (s1 < l1) lWin++;

                if (s2 > l2) sWin++;
                else if (s2 < l2) lWin++;

                if (sWin > lWin) wins++;
            }
        }
        cout << wins << endl;
    }
    return 0;
}
