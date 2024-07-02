class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        
        int x = 0 , y = 0;

        for(int h = 1 ; ; h++)
        {
            x += h; swap(x,y);

            if(red >= x && blue >= y);
            else if(red >= y && blue >= x);
            else return h-1;
        }
    }
};