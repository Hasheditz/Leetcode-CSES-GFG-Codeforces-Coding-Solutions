class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        int n = nums.size();

        sort(nums.begin() , nums.end());

        int cnt = 0;

        for(int i = 1 ; i < n ; i++)
        {
            if(nums[i] <= nums[i-1])
            {
                int temp = nums[i];
                nums[i] = nums[i-1]+1;
                cnt += nums[i] - temp;
            }
        }

        return cnt;
    }
};