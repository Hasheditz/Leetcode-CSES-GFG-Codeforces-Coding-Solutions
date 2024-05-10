class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        
        int n = arr.size();
        vector<pair<double,pair<int,int>>> v;

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                double curr = double(arr[i])/double(arr[j]);
                v.push_back({curr,{arr[i],arr[j]}});
            }
        }

        sort(v.begin() , v.end());

        return {v[k-1].second.first, v[k-1].second.second};
    }
};