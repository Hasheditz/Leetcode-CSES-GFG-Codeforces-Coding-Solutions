class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int, int>> pq; 

        for (int i = 0; i < n; ++i) {
            pq.emplace(score[i], i);
        }

        vector<string> res(n);

        int rank = 1;
        while (!pq.empty()) {
            auto current = pq.top();
            pq.pop();
            int index = current.second;
            if (rank == 1) {
                res[index] = "Gold Medal";
            } else if (rank == 2) {
                res[index] = "Silver Medal";
            } else if (rank == 3) {
                res[index] = "Bronze Medal";
            } else {
                res[index] = to_string(rank);
            }
            ++rank;
        }

        return res;
    }
};
