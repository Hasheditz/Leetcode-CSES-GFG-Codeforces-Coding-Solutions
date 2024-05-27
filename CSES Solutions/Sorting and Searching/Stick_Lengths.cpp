#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(auto &i : v)
    {
        cin>>i;
    }

    sort(v.begin() , v.end());
    int midi = v[n/2];
    ll ans = 0;
    for(auto i : v)
    {
        ans += abs(midi-i);
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
