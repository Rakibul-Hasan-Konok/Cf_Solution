#include <iostream>
#include <algorithm>
using namespace std;

void generateMatrix(int n) {
   int x = n*n,y=1;
   int arr[n][n];
   for(int i=0;i<n;i++)
   {
    if(i%2==0)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j] = x;
            if(x<y)x++;
            else x--;
            swap(x,y);
        }
    }
    else{
        for(int j=n-1;j>=0;j--)
        {
            arr[i][j] = x;
            if(x<y)x++;
            else x--;
            swap(x,y);
           // cout<<x<<" "<<y<<endl;
        }
    }
   }
   for(int i =0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    cout<<arr[i][j]<<" ";
    cout<<endl;
   }
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        generateMatrix(n);
    }
    return 0;
}
