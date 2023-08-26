//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       
       int n = s1.size();
       int m = s2.size();
       bool iss1neg = false;
       bool iss2neg = false;
       if(s1[0] == '-') {iss1neg = true; s1[0] = '0';}
        if(s2[0] == '-') {iss2neg = true; s2[0] = '0';}
       string ans(n + m, '0');
       
       for(int i = n-1 ; i >= 0 ; i--)
       {
           for(int j = m-1 ; j >= 0 ; j--)
           {
               int prod = ((s1[i]-'0')*(s2[j] - '0') + ans[i+j+1] - '0');
               ans[i+j+1] = prod%10 +'0';
               ans[i+j] += prod/10;
           }
       }
       
       for(int i = 0 ; i < n+m ; i++)
       {
           if(ans[i] != '0') {
           ans = ans.substr(i);
           break;
               
           }
       }
       
       if(iss1neg and iss2neg) 
       {return ans;}
       
       else if(iss1neg || iss2neg)
       {
           reverse(ans.begin() , ans.end());
           ans+="-";
           reverse(ans.begin() , ans.end());
           return ans;
       }
       else if(!iss1neg and !iss2neg) {return ans;}
       
       return "0";
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends