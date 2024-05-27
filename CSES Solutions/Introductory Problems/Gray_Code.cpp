#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
    vector<string> generate(ll n)
    {
        if(n==1)
        {
            return {"0","1"};
        }
        vector<string> ans;
        vector<string> temp = generate(n-1);
        //   for(auto i : temp)
        // {
        //     cout<<i<<endl;
        // }
        for(ll i=0;i<temp.size();i++)
        {
            ans.push_back("0"+temp[i]);
        }
        for(ll i=temp.size()-1;i>=0;i--)
        {
            ans.push_back("1"+temp[i]);
        }
        return ans;
    }
 
    int main()
    {
        ll n; cin>>n;
 
        vector<string> garyString = generate(n);
 
        for(auto i : garyString)
        {
            cout<<i<<endl;
        }
 
        return 0;
    }
