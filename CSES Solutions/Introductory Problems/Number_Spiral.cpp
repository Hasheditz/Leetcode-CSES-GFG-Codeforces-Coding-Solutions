#include <bits/stdc++.h>
using namespace std;
 
long long sqr(long long a)
{
    // long long mod = 1e9 + 7;
    long long b = 2;
    while(b)
    {      
        long long res = 1;
        while (b) {
            if (b & 1)
                res = (res*a) ;
            a = (a * a) ;
            b >>= 1;
        }
        return res;
    }
}
int main()
{
    long long t;
    cin>>t;
 
 
    while(t--)
    {
      
      long long x,y;
      cin>>x>>y;
      long long ans = 0 ;
 
        if(x == 1 && y == 1) cout << 1 <<endl;
 
        else if(x == y)
        {
            ans = sqr(x) - (x-1);
            cout << ans << endl;
        }
        else if (x > y)
        {
            if(x&1){ ans =  sqr(x-1) + y ;}
            else { ans = sqr(x) - y + 1 ;} 
             cout<<ans<<endl;
 
        }
 
        else if (y > x){
            if(y&1) {ans =  sqr(y) - x + 1; }
            else{ ans =  sqr(y-1) + x;}
             cout<<ans<<endl;
  
        }
        
    }
    return 0;
}