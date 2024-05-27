class Solution {
public:
    int cnt(const vector<int>& nums, int mid) {
        int cnt = 0;
        for (int num : nums) {
            if (num >= mid) cnt++;
        }
        return cnt;
    }

    int specialArray(vector<int>& nums) {

        int n = nums.size();

        int low = 1, high = n;  

        while (low <= high) {
            
            int mid = (low + high) / 2;
            int count = cnt(nums, mid);

            if (count == mid) {
                return mid;
            } else if (count > mid) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};
