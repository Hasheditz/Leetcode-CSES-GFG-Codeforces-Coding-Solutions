class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
        
        sort(hap.begin(), hap.end(), greater<int>());
        int n = hap.size();
        
        int neg = 0;
        long long out = 0;
        for(int i = 0; i < n; ++i){
            if(k > 0){
                out += max(0, hap[i] - neg);
                if(hap[i] - neg >= 0){
                    ++neg;
                }
                --k;
            } 
        }
        return out;
    }
};
