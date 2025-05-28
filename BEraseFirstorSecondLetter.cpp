#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        set<char>dStr;
        int ans=0;
        for(int i=0;i<s.size();i++){
            dStr.insert(s[i]);
            ans+=dStr.size();
        }
        cout<<ans<<endl;
    }
}