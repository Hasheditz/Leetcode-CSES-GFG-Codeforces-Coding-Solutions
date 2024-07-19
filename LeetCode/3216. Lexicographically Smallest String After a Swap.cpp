class Solution {
public:
    string getSmallestString(string s) {
        
        string res = s;
        bool chk = 0;
        for(int i = 1 ; i < s.size() ; i++)
        {
            if(s[i]&1 == s[i-1]&1 || !(s[i]&1) == !(s[i-1]&1)) {swap(s[i],s[i-1]); chk = 1;}

            res = min(res,s);

            if(chk) {swap(s[i],s[i-1]); chk = 0;}
        }

        return res;
    }
};