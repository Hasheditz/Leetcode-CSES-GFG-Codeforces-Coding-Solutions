class Solution {
public:
    int heightChecker(vector<int>& h) {
        
        vector<int> chk = h;
 
        int n = h.size();

        for(int i = n-1 ; i >= 0 ; i--)
        {
            for(int j = 0 ; j < i ; j++)
            {
                if(chk[j] > chk[i]) swap(chk[j] , chk[i]);
            }
        }

        int cnt = 0 ;

        for(int i = 0 ; i < n ; i++)
        {
            if(chk[i] != h[i]) cnt++;
        }

        return cnt;;
    }
};