class Solution {
public:
    int maximumLength(vector<int>& nums) {

        int eve = 0, odd = 0, alt = 0, turn = -1;

        for (auto i : nums) {
            if (i & 1) {
                odd++;
                if (turn != 1) {
                    alt++;
                    turn = 1;
                }
            } else {
                eve++;
                if (turn != 0) {
                    alt++;
                    turn = 0;
                }
            }
        }

        return max({eve, odd, alt});
    }
};