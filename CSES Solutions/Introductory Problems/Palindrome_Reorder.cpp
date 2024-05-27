#include<bits/stdc++.h>
using namespace std;
int main(){
 
    string s;
    cin>>s;
 
    int cnt = 0;
 
    string res = "";
    char mid;
    map<char,int> mp;
 
    for(auto i : s)
    {
        ++mp[i];
    }
 
    bool odd;
    if(s.size() & 1) odd = true;
    
 
    for(auto i : mp)
    {
       if(i.second % 2 == 1) cnt++;
       if(odd && cnt > 1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
 
        if(cnt == 1)
        {
            // cout<<"Hello";
            mid = i.first;
            break;
        }
    }
 
  
 
    for(auto i : mp)
    {
        int n = i.second/2;
 
        while(n--)
        {
            res += i.first;
        }
    }
 
    //   for(auto i : mp)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
 
    string rem = res;
    reverse(rem.begin() , rem.end());
    if(odd && cnt != 0) res += mid;
    string ans = res+rem;
 
    if(ans.size() != s.size()) {cout<<"NO SOLUTION"<<endl; return 0;}
 
    cout<<ans<<endl;
 
    return 0;
}
