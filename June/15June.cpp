//{ Driver Code Starts

// nobita_01

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        
        int n = s.size();
        int start = n;
        int ans = 0 ;
        
        for(int i = 0 ; i < n ; i++)
        {
            int l = i - 1;
            int r = i + 1;
            
            int cans = 1;
            
            while( l > -1 and r < n and s[l] == s[r])
            {
                cans+=2;
                --l;
                ++r;
            }
            
            if(cans > ans)
            {
                ans = cans;
                start = l+1;
            }
            
            else if(cans == ans and l + 1 < start)
            {
                start = l + 1 ;
            }
            
            l = i -1 ;
            r = i;
            cans = 0;
             while( l > -1 and r < n and s[l] == s[r])
            {
                cans+=2;
                --l;
                ++r;
            }
            
            if(cans > ans)
            {
                ans = cans;
                start = l+1;
            }
            
            else if(cans == ans and l + 1 < start)
            {
                start = l + 1 ;
            }
        }
        
        return s.substr(start , ans);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}

// } Driver Code Ends