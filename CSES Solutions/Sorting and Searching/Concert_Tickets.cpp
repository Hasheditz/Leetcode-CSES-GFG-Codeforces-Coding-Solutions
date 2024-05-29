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
    int n,m;
    cin>>n>>m;
 
    multiset<int> ticket;
 
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        ticket.insert(x);
    }
 
    for(int i = 0 ; i < m ; i++)
    {
        int curr;
        cin>>curr;
 
        auto it = ticket.upper_bound(curr);
 
        if(it == ticket.begin())
        {
            cout<<-1<<endl;
        }
 
        else {cout<<*(--it)<<endl; ticket.erase(it);}
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
