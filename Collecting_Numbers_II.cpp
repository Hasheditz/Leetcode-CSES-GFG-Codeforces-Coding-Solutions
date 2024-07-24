#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define nl endl
#define ll long long int



int solve(vector<int> &nums, int m, int n)
{

    vector<int> pos(n,0);
    int j = 1;
    for(auto i : nums)
    {
        pos[i] = j;
        j++;
    }

    int ans = 1 , curr = 1;
 
   for(int i = 1 ; i <= n ; ++i)
   {
    if(curr > pos[i]) ans++;
    curr = pos[i];
   }
 
   return ans;
    

}

int main()
{
   
    int n, m;
    cin>>n>>m;
    vector<int> nums(n);

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        nums[i] = x;
    }

    while(m--)
    {
        int a,b;
        cin>>a>>b;
        swap(nums[--a],nums[--b]);
        cout<<solve(nums, m , n)<<endl;
    }

    return 0;
}
