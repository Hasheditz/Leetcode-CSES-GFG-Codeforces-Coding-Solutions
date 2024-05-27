#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,w;
    cin>>n>>w;

    vector<ll> v(n);
    for(auto &i : v)
    {
        cin>>i;
    }

    ll cnt = 0;
    int l = 0;
    int r = n-1;
    sort(v.begin() , v.end());

    while(l <= r)
    {
        if(v[l] + v[r] <= w)
        {
            l++;
            r--;
            cnt++;
        }

        else{

            r--;
            cnt++;
        }
    }

    cout<<cnt;
   

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
