#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll ar[n],last=0;
    ll L[n],R[n];
    for(ll i=0;i<n;i++) {
        cin>>ar[i];
        L[i]=last+1;
        R[i]=ar[i]+last;
        last=R[i];
    }
    ll m;
    cin>>m;
    while (m--) {
        int q;
        cin>>q;
       
     ll ans = lower_bound(R, R + n, q) - R;

        cout<<ans+1<<endl;



    }
    return 0;
}
