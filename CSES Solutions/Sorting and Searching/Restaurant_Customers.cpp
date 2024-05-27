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

    for(int i = 0 ; i < n ; i++)
    {
        ll in , out;
        cin>>in>>out;

        time.pb({in,1});
        time.pb({out,-1});
    }

    sort(all(time));

    int curr = 0 , res = 0;
    for(const pair<ll,ll> &t : time)
    {
        curr += t.second;
        res = max(res,curr);
    }

    cout<<res;
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
