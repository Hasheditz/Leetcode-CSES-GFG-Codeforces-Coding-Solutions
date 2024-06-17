class Solution {
public:
    bool judgeSquareSum(int c) {

        int part = 0;

        long long low = 0 , high = sqrt(c);

        while(low <= high)
        {
            if( low*low + high*high == c) return true;
            else if(low*low + high*high > c) high--;
            else low++;
        }

        return false;
    }
};