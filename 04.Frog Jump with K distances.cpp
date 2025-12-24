class Solution {
public:

   int solve(int in,vector<int>&heights,int k,int dp[])
   {
       if(in==0)
       {
           return 0;
       }
       
       int mini=INT_MAX;
       
       if(dp[in]!=-1)
       {
         return dp[in];   
       }
       
     for(int i=1;i<=k;i++)
     {
         if(in-i>=0)
         {
             int jump=solve(in-i,heights,k)+abs(heights[i]-heights[in-i]);
             mini=min(mini,jump);
         }
           
     }
       
       
       return dp[in]=mini;
       
       
       
       
   }





    int frogJump(vector<int>& heights, int k) {
        
        int n=heights.size();
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return solve(n-1,heights,k,dp);

    }
};

