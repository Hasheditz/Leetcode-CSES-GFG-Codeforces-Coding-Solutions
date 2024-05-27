#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
int main()
{
   int n;
   cin>>n;
 
   vector<int> v(n);
 
   for(auto &i : v)
   {
    cin>>i;
   }
 
   ll ans = INT_MAX;
 
   for(int i = 1 ; i <= (1<<n) ; ++i)
   {
    ll a = 0;
    ll b = 0;
 
        for(int j = 0 ; j < n ; ++j)
        {
            if(i & (1<<j))
            a += v[j];
 
            else b += v[j];
        }
 
        ans = min(ans , abs(a-b));
   }
 
   cout<<ans;
 
    return 0;
}