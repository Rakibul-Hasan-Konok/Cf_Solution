#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll arr[n],sum=0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<(n+1)-(1*sum)<<endl;
   }

    return 0;
}
