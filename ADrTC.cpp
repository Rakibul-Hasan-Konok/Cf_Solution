#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<n; i++)
        if(s[i]=='1') ans += n-1;
        else ans++;
    cout << ans << '\n';
    }
    return 0;
}
