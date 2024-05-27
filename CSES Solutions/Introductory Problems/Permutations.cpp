#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
 
    if(n == 3 || n == 2){ cout<<"NO SOLUTION"; return;}
    if(n == 1) {cout << 1 ; return;}
 
    vector<long long> ans;
 
int i = 1;
int j = 2;
  while(j<=n)
    {
        ans.push_back(j);
        j += 2;
    } 
    
    while(i<=n)
    {
        ans.push_back(i);
        i+=2;
    }
 
  
 
    for(auto i : ans)
    {
        cout<<i<<" ";
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