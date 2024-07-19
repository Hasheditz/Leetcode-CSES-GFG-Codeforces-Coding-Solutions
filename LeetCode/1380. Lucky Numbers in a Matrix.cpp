class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();

        vector<int> row, col;

        for(int i = 0 ; i < n ; i++)
        {
            int mini = mat[i][0];
            for(int j = 0 ; j < m ; j++)
            {
                mini = min(mini, mat[i][j]);
            }

            row.push_back(mini);
        }

        for(int i = 0 ; i < m ; i++)
        {
            int mini = mat[0][i];
            for(int j = 0 ; j < n ; j++)
            {
                mini = max(mini, mat[j][i]);
            }

            col.push_back(mini);
        }


        vector<int> res;

        for(auto i : row)
        {
            for(auto j : col)
            {
                if(i == j) res.push_back(i);
            }
        }

        return res;
    }
};