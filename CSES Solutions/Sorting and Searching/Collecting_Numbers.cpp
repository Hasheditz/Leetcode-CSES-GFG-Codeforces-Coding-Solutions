#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n+1,0);

   for(int i = 1 ; i <= n ; ++i)
   {
    int x;
    cin>>x;
    v[x] = i;
   }

   int ans = 1 , curr = 1;

   for(int i = 1 ; i <= n ; ++i)
   {
    if(curr > v[i]) ans++;
    curr = v[i];
   }

   cout<<ans;

}

int main()
{
    // int t;
    // cin >> t;

    // while (t--)
    {
        solve();
    }
    return 0;
}
