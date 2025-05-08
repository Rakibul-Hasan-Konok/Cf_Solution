// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//        long long int n,k,md=0,ml=1;
//         cin>>n>>k;
//         int arr[n];
//         bool ok=false;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//             if(arr[i]%k==0) ok=true;
//             md=max(md,arr[i]%k);
//             ml*=arr[i];
//         }
//         if(k==4 || k==3){
//             cout<<(ml%4==0? 0 : k-ml)<<endl;
//         }
//         else if(ok) cout<<0<<endl;
//         else{
//             cout<<k-ml<<endl;
//         }

        
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       long long int n,k,x,y,z,ans;
        cin>>n>>k;
        long long int sub[2] = {0};
        ans = k;
        for(int i=0;i<n;i++){
           cin>>x;
           if(x%k)ans = min(ans,k-x%k);
           else ans =0;
           if(k==4)sub[x%2]++;
        }
        if(k==4){
            y = 0;
            x = 2;
            x -= min(x,sub[0]);
            y = min(x,sub[1]);
            x -= y;-
            if(x==0)ans = min(y,ans);
        }
        cout<<ans<<endl;

        
    }
    return 0;
}
