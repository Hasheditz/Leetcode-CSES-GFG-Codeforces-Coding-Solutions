#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int k = n;

    vector<int> v(n);

    for(auto &i : v)
    {
        cin>>i;
    }

    sort(v.begin() , v.end());

    for(int i = 0 ; i < n ; i++)
    {
        if(v[i] == v[i+1]) k--;
    }

    cout<<k;
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
