//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code End

class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        vector<int> dx(n , 0);
        
        for(int i = 0 ; i < k ; ++i)
        {
            dx[updates[i] - 1]++;
        }
        
        int req = 0;
            
            for(int i = 0 ; i < n ; ++i)
            {
                req += dx[i];
                a[i]+=req;
            }
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n]={0}, updates[k]={0};
		for(int i = 0; i < k; i++)
		cin>>updates[i];
		Solution ob;
		ob.update(a, n, updates, k);
		
		for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends