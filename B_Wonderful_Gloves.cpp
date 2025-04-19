#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t,n,k; cin >> t;
    while (t--) {
        cin>>n>>k;
        ll a[n],b[n];
        ll sum = 0;
        ll sum2 = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]<b[i])swap(a[i],b[i]);
            sum+=a[i];
        }
        sort(b,b+n);
        for(int i=1;i<k;i++)sum+=b[n-i];
        cout<<sum+1<<endl;
    }
    return 0;
}
