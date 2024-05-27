#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    
	    int cnt = 0;

            cnt += min(x,y/3);
            x -= min(x,y/3);
            cnt += x/2;

        cout<<(cnt >= n ? "YES" : "NO") << endl;
    
	}

}
