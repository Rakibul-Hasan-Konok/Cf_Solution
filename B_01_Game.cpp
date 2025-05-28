#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        map<char,int> mp;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        if(mp['0']>mp[1]) {
            if(mp['1']%2==0) cout<<"NET"<<endl;
            else cout<<"DA"<<endl;
        }
        else{
            if(mp['0']%2==0) cout<<"NET"<<endl;
            else cout<<"DA"<<endl;
        }
    }
    return 0;
}
