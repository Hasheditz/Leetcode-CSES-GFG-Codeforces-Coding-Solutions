//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i = 0, out = -1;
        int c = 0, n = s.size();
        map<char,int> mp;
        
        for(int j = 0 ; j < n ; ++j)
        {
            if(mp[s[j]] == 0)
            ++c;
            ++mp[s[j]];
            
            while(c > k and i < j)
            {
                --mp[s[i]];
                
                if(mp[s[i]] == 0)
                {
                    --c;
                }
                
                ++i;
            }
            
            if(c == k)
            out = max(out , j-i+1);
            
        }
        
        return out;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends