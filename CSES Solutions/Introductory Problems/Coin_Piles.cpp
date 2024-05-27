#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long x, y;
    cin >> x >> y;
 
    if ((x + y) % 3 == 0 && min(x, y) >= (x + y) / 3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
