#include<bits/stdc++.h>
using namespace std;
int main(){
 
long long n; cin>>n;
 
long long psum = 0;
 
for(int i = 0 ; i < n-1 ; i++)
{
    long long x;
    cin>>x;
    psum += x;
}
   long long sum = (n*(n+1))/2;
 
   cout<<sum-psum;
}
