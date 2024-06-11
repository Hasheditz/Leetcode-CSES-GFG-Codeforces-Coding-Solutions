class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

     vector<int> res;

     map<int,int> mp;

     for(auto i : arr1)
     {
        mp[i]++;
     }

     for(auto i : arr2)
     {
        auto it = mp.find(i);
        int put = it -> second;
        it -> second = 0;
        for(int i = 0 ; i < put ; i++)
        {
            res.push_back(it -> first);
        }
     }

     for(auto i : mp)
     {
        if(i.second != 0)
        {
            for(int j = 0 ; j < i.second ; j++)
            {
                res.push_back(i.first);
            }
        }
     }

     return res;
    }
};