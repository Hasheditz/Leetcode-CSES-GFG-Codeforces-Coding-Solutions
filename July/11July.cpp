//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		vector<int> ans;
 		
 		int top = 0 , left = 0, right = m-1 , bot = n-1;
 		
 		while(top <= bot and left<= right){
 		    
 		    for(int i = left ; i <= right ; i++)
 		    {
 		        ans.push_back(a[top][i]);
 		    }
 		    top++;
 		    
 		    for(int i = top ; i <= bot ; i++)
 		    {
 		        ans.push_back(a[i][right]);
 		    }
 		    right--;
 		    
 		    if(bot >= top){
 		    for(int i = right ; i >= left ;i--)
 		    {
 		        ans.push_back(a[bot][i]);
 		    }
 		    bot--;
 		    }
 		    
 		    if(left <= right){
 		    for(int i = bot ; i >= top ; i--)
 		    {
 		        ans.push_back(a[i][left]);
 		    }
 		    left++;
 		    }
 		}
 		
 		int res = ans[k-1];
 		
 		return res;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends