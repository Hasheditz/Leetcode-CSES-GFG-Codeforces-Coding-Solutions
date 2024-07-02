class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int n = arr.size();

        int cnt = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]&1) {cnt++; if(cnt == 3) return 1;}
            else cnt = 0;
        }

        return 0;
    }

};