#include<bits/stdc++.h>
using namespace std;
int main(){
 
string s;
cin>>s;
int cnt = 0 , ans = 0;
for(int i = 0 ; i < s.size() ; ++i)
{
    if(s[i] == s[i+1]) {cnt++;
 
    ans = max(ans , cnt);
    }
    else
    cnt = 0;
}
 
cout<<ans+1;
 
}
