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

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int curr = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            curr = 0;
        }
        else curr++;

        if(curr > 3)
        {
            cout<<"NO"<<endl;return;
        }
    }

    cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
