class Solution {

    int sets(vector<int> &day , int k , int mid)
    {
        int curr = 0, n = day.size(), j = 0, cnt = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(day[i] <= mid) curr++;

            else {cnt += curr/k; curr = 0;}
        }

        cnt += curr/k;
        return cnt;
    }

public:
    int minDays(vector<int>& day, int m, int k) {

        int n = day.size();

        if(n < 1LL*m*k) return -1;
        
        int res = INT_MAX;
        int low = *min_element(day.begin() , day.end());
        int high = *max_element(day.begin() , day.end());

        while(low <= high)
        {
            int mid = (low + high)/2;

            int curr = sets(day,k,mid);

            if(curr >= m) {res = min(res, mid); high = mid - 1; }
            else low = mid + 1;
        }

        return res;
    }
};