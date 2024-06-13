class Solution {
public:
    int minMovesToSeat(vector<int>& seat, vector<int>& student) {
        
        sort(seat.begin() , seat.end());
        sort(student.begin() , student.end());

        int ans = 0;
        for(int i = 0 ; i < seat.size(); i++)
        {
            ans += abs(seat[i] - student[i]);
        }

        return ans;

    }
};