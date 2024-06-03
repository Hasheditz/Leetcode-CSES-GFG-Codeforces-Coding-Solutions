class Solution {
public:
    int appendCharacters(string s, string t) {

        int n = s.size() , m = t.size();

        int temp1 = 0 , temp2 = 0;

        while(temp1 < n && temp2 < m)
        {
            if(t[temp2] == s[temp1]) {temp1++; temp2++;}

            else temp1++;
        }

        return m-temp2;
        
    }
};