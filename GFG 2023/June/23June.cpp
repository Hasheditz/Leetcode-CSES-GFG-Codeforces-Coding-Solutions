//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int leastInterval(int n, int k, vector<char> &tasks) {
        priority_queue<int> pq;
        vector<int> taskFreq(26,0);
        int time = 0; 

        for(auto i:tasks)
             taskFreq[i-'A']++;  
        
        for(auto i:taskFreq){
            if(i) 
            pq.push(i);
        }

        while(!pq.empty()){
            int itrK = k+1;                 
            vector<int> restTask;

            while(!pq.empty() && itrK){
                int freqMax = pq.top();     
                pq.pop();

                if(freqMax>1)               
                    restTask.push_back(freqMax-1); 

                ++time; 
                --itrK; 
            }

            for(auto i:restTask)
                pq.push(i); 

            if(pq.empty())
                break;                      
            
            time += itrK;        
        }

        return time;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends
