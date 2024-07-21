class Solution {
public:
    int minChanges(int n, int k) {
        
        int cnt = 0;
        
        int turn = max(n,k);

        while(turn)
        {
            if(n&1 && k&1) {n >>= 1; k >>= 1; }
            else if(!(n&1) && !(k&1)) {n >>= 2; k >>= 2;}
            else if(n&1 && !(k&1)) {cnt++; n >>= 2; k >>= 2;}
            else if(k&1 && !(n&1)) return -1;
            turn >>= 1;
        }
        
        return cnt;
    }
};