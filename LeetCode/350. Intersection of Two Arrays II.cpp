class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        bool turn = 0;

        if (n <= m)
            turn = 1;

        vector<int> res;

        for (int i = 0; i < min(n, m); i++) {
            for (int j = 0; j < max(n, m); j++) {
                if (turn && nums1[i] == nums2[j]) {
                    res.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                }

                else if (!turn) {
                    if (nums2[i] == nums1[j]) {
                        res.push_back(nums2[i]);
                        nums1[j] = -1;
                        break;
                    }
                }
            }
        }

        return res;
    }
};