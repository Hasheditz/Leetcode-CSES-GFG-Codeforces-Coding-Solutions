#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
 
    int ans = 0;
 
    while(n > 0)
    {
        ans += n/5;
        n /= 5;
    }
 
    cout<<ans<<endl;
}
 
int main()
{
    // int t;
    // cin >> t;
 
    // while (t--)
    // {
        solve();
    // }
    return 0;
}
