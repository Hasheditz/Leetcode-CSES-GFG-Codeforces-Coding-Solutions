#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n ;
    cin>>n;

    vector<long long> v(n);

    for(auto &i : v)
    {
        cin>>i;
    }

    int start = -1 , end = n+1;
    long long sum = 0, maxi = INT_MIN ;

    for(long long i = 0 ; i < n ; ++i)
    {
        if(sum == 0) start = i;
        sum += v[i];


        if(sum > maxi) {maxi = sum; end = i;}

        if(sum < 0) sum = 0;
    }

    // cout << maxi << " "<<start << " " << end;
    cout<<maxi;
}

int main()
{
    solve();
    return 0;
}
