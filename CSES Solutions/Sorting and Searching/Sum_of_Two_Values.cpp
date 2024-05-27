#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum;
    cin>>n>>sum;
    vector<pair<int,int>> v;

    for(int i = 0 ; i < n ; ++i)
    {
        int x;
        cin>>x;
       v.push_back(make_pair(x,i));
    }
   

    int l = 0 , r = n-1;

    sort(v.begin() , v.end());

    while(l<r)
    {
        int curr = v[l].first + v[r].first;

        if( curr == sum ) {cout<<v[r].second+1<<" "<<v[l].second+1; return;}

        if(curr > sum ) r--;
        else l++;
    }

    cout<<"IMPOSSIBLE";
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
