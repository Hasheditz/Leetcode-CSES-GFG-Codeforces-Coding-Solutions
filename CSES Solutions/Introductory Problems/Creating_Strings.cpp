#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    cin>>s;
    sort(s.begin( ) , s.end());
    int cnt = 0;
 
    vector<string> ans;
    ans.push_back(s);
 
    while(next_permutation(s.begin() , s.end()))
    {
        ans.push_back(s);
        cnt++;
 
    }
 
    cout<<cnt+1<<endl;
    for(auto i : ans)
    {
        cout<<i<<endl;
    }
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