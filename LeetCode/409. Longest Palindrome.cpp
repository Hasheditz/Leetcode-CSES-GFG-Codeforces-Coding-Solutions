
// Approach Using The HashMap

class Solution {
public:
    int longestPalindrome(string s) {
        
        map<char,int> mp;
        int ans = 0;

        for(auto i : s)
        {
            mp[i]++;
        }

        for(auto i : mp)
        {
            if(!(i.second & 1)) ans += i.second;
            else ans += i.second - 1;
        }

        if(ans == s.size()) return ans;
        else return ans + 1;
    }
};

// Approach Without Using Extra Space

class Solution {
public:
    int longestPalindrome(string s) {

        sort(s.begin() , s.end());

        int ans = 0;
        int n = s.size();

        int cnt = 0;

        for(int i = 1 ; i <= n ; i++)
        {

            if(s[i-1] == s[i]) {cnt++;}
            
            else
            {
                if(!(cnt&1)) ans += cnt;
                else ans += cnt+1;
                cnt = 0;
            }
        }

        if(ans == n) return ans;
        else return ans + 1;
    }
};