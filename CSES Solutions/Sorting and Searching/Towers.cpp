#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    multiset<int> ans;

    for(int i = 0 ; i < n ; i++)
    {
        int k;
        cin>>k;

        auto it = ans.upper_bound(k);

        // Find the tower having the element that is just larger than k to add
		// k to. If it doesn't exist then we create a new tower.

        if(it == ans.end()) ans.insert(k);
        else {

            // If there exists a satisfying tower, add k to that tower and
			// update the top element of the tower
            
            ans.erase(it);
            ans.insert(k);
        }

    }

    cout<<ans.size();
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

