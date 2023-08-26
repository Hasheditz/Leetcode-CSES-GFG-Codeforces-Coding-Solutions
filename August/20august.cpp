//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int count(int arr[], int n, int x) {
	    vector<int> nums(arr, arr+n);
	    auto st = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
	    if(st == n) 
	        return 0;
	    auto ed = upper_bound(nums.begin(), nums.end(), x) - nums.begin();
	    return ed - st;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends