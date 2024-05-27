#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &j : v) {
        cin >> j;
    }

    set<ll> s;
    ll ans = 0, i = 0, j = 0;

    while (j < n) {
        
        if (s.find(v[j]) == s.end()) {
            s.insert(v[j++]);
            ans = max(ans, j - i );  
        } else {
           
            s.erase(v[i++]);
        }
    }

    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
