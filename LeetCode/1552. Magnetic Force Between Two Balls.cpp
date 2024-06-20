class Solution {

    int fix(vector<int> &pos, int m, int mid)
    {
        int cnt = 1, n = pos.size();
        
        int curr = pos[0];

        for(int i = 1 ; i < n ; i++)
        {
            if(abs(curr - pos[i]) >= mid) {cnt++; curr = pos[i];}
        }

        return cnt;
    }
public:
    int maxDistance(vector<int>& pos, int m) {
        
        int n = pos.size();

        sort(pos.begin() , pos.end());

        int low = 1, high = pos[n-1] - pos[0];

        while(low <= high)
        {
            int mid = (low+high)/2;

            if(fix(pos,m,mid) >= m) {low = mid + 1;}

            else high = mid - 1;
        }

        return high;
    }
};