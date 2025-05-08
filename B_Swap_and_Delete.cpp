#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map<char, int> freq;
        freq['0'] = 0;
        freq['1'] = 0;
        for (int i = 0; i < s.size(); i++) freq[s[i]]++;
        int sz=s.size(),ans=0,i=0;
        while(i<sz){
            if(s[i]=='0' && freq['1']==0) break;
            if(s[i]=='1' && freq['0']==0) break;
            if(s[i]=='0' && freq['1']>0) {
                freq['1']--;
                ans++;
            }
            if(s[i]=='1' && freq['0']>0) {
                freq['0']--;
                ans++;
            }
            
            i++;
            
        }
        cout<<s.size()-ans<<endl;
        
    }

    return 0;
}
