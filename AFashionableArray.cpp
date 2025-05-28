#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
       sort(arr,arr+n);
       int i=n-1,operation1=0,operation2=0;
       while(i>=0){
        if((arr[0]+arr[i])%2==0) break;
        i--;
        operation1++;
       }
       i=0;
        while(i<n){
        if((arr[n-1]+arr[i])%2==0) break;
        i++;
        operation2++;
       }

       cout<<min(operation1,operation2)<<endl;



    }
}
