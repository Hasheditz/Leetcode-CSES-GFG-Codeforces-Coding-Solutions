#include<bits/stdc++.h>
using namespace std;
int main(){
 
long long n;
cin>>n;
 
long long sum = (n*(n+1))/2;
 
if(sum % 2 != 0) {cout<<"NO"; return 0;}
 
long long half = sum/2;
 
vector<long long> fr(n,0);
vector<long long> h1,h2;
    long long rsum = n;
 
long long i = n-1;
 
    while(rsum < half)
    {
        rsum += i;
        fr[i] = -1;
        --i;
    }
 
    long long rem = half - rsum + i;
// cout<<rem<<" "<<rsum<<endl;
    fr[rem] = -1;
 
// for(auto i : fr)
// {
//     cout<<i<<" ";
// }
 
for(long long i = 0 ; i < n ; i++)
{
    if(fr[i] == 0) h1.push_back(i+1);
    else h2.push_back(i+1);
}
cout<<"YES"<<endl;
cout<<h1.size()<<endl;
for(auto i : h1) cout<<i<<" ";
cout<<endl;
cout<<h2.size()<<endl;
for(auto i : h2) cout<<i<<" ";
 
}
