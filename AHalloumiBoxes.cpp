#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >>n>>k;
        vector<int> ar(n),cp(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        cp=ar;
        sort(cp.begin(),cp.end());
 
        if(k>1 || cp==ar) cout<<"YES\n";
        else cout<<"NO"<<endl;
 

        
    }

    return 0;
}