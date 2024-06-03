#define ll long long
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int bucket1 = 0 , bucket2 = 0;

        ll right_set_bit = 0;

        for(auto i : nums)
        {
            right_set_bit ^= i;
        }

        right_set_bit = (right_set_bit & (right_set_bit-1)) ^ right_set_bit;
       

        for(auto i : nums)
        {

            if(i & right_set_bit) bucket1 ^= i;
            else bucket2 ^= i;
        }

        return {bucket1,bucket2};
    }
};