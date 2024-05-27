#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define nl endl
#define ll long long int



void solve()
{
    int n;
    cin>>n;

    vector<pair<ll,ll>> time;

    while(n--)
    {
        ll in,out;
        cin>>in>>out;

        time.pb(mp(out,in));
    }

    int cnt = 1;

    sort(all(time));

    ll end = time[0].first;

    for(const pair<ll,ll> &it : time)
    {

        if(it.second >= end) {cnt++; end = it.first;}
    }

    cout<<cnt;
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
