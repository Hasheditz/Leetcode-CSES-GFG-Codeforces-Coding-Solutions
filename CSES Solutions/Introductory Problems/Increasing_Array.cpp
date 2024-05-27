#include<bits/stdc++.h>
using namespace std;
int main(){
 
long long n;
cin>>n;
 
vector<long long> v(n);
 
 
long long cnt = 0;
for(auto &i : v)
{
    cin>>i;
}
 
long long maxi = 0;
long long nax = INT_MIN;
 
for(int i = 0 ; i < n ; i++)
{
    if(v[i] >= nax)
    {
        nax = v[i];
        maxi = i;
    }
}

 
long long max1 = v[0];
 
for(int i = 0 ; i < maxi ; ++i)
{
    if(v[i] <= max1) {cnt += max1 - v[i];}
 
    else max1 = v[i];
}
 
for(int i = maxi ; i < n ; ++i)
{
    cnt += nax - v[i];
}
 
cout << cnt;
}