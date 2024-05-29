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

    vector<int> v(n);

    for(int i = 1 ; i <= n ; i++)
    {
        v[i] = i;

    }

    for(int i = 2 ; i <= 2*n+1; i+=2)
    {
        cout<<v[(i+1) % n]<<" ";

        // if(i == n && !(n&1)) i+=2;
    }
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
