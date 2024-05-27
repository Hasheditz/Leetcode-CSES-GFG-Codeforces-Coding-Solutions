#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(auto &i : v)
    {
        cin>>i;
    }

    ll ans = 1 , sum = 0;

    sort(v.begin() , v.end());

    for(ll i = 0 ; i < n ; ++i)
    {
        sum += v[i];
        if(v[i] <= ans) ans += v[i];
        else{ cout<<ans; return;}
    }

    cout<<sum+1;
}

int  main()
{
    // int t;
    // cin >> t;

    // while (t--)
    {
        solve();
    }
    return 0;
}
