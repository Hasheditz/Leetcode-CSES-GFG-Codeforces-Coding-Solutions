class Solution {
public:
    vector<string> sortPeople(vector<string>& nam, vector<int>& h) {
        
        int n = h.size();
        vector<string> ans;
        vector<pair<int,string>> res;

        for(int i = 0 ; i < n ; i++)
        {
            res.push_back({h[i],nam[i]});
        }


        sort(res.rbegin() , res.rend());

        for(auto i : res)
        {
            ans.push_back(i.second);
        }

        return ans;
    }
};