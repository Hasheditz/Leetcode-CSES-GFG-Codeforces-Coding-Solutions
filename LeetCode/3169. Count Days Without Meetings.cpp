class Solution {
public:
    int countDays(int days, vector<vector<int>>& meet) {

        sort(meet.begin(), meet.end());

        int res = 0;

        int end = 0;
       
        for (auto i : meet) {

            int curr = i[0];

            if (end < curr)
                {
                res += (curr - end - 1);
                }
                end = max(end,i[1]);

            
        }

        if(end < days) res += (days-end);

        return res;
    }
};