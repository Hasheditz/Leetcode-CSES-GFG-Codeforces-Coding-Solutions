#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> a(n), b(m);

    for(auto &i : a)
    {
        cin>>i;
    } 
     for(auto &i : b)
    {
        cin>>i;
    } 

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    int j = 0 , cnt = 0;

    for(int i = 0; i < n ; ++i){
        int nin = a[i] - k;
        while(j < m && b[j] < nin){
            ++j;
        }
        if(j == m)
            break;
        int nax = a[i] + k;
        if(b[j] <= nax){
            ++cnt;
            ++j;
        }
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
