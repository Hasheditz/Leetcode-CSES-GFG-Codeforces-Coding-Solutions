class Solution {
public:
    int maxProfitAssignment(vector<int>& diff, vector<int>& profit, vector<int>& worker) {
        
        int n = worker.size();
        int m = profit.size();
        int ans  = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int curr = 0;
            for(int j = 0 ; j < m ; j++)
            {
                if(worker[i] >= diff[j]) curr = max(curr, profit[j]);
            }

            ans += curr;
        }

        return ans;
    }
};