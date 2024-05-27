#include<bits/stdc++.h>
using namespace std;
 
void toh(int n , char from , char aux, char dest)
{
    int cnt = 0;
    if(n == 0)
    { 
        return;
    }
    toh(n-1 , from , dest ,aux);
    cout<<from<<" "<<dest<<endl;
    toh(n-1 , aux , from , dest);
}
 
int main()
{
    int n;
    cin>>n;
 
    cout<<(1<<n)-1<<endl;
    toh(n, '1' , '2' , '3');
 
 
}
