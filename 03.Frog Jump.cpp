#include<bits/stdc++.h>
using namespace std;

int solve(int ind,vector<int>&heights,int dp[])
{
    if(ind==0)
    {
        return 0;
    }
    
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }

    int two=INT_MAX;
    
   int one=solve(ind-1,heights,dp)+abs(heights[ind]-heights[ind]-1);
  
   if(ind>1)
   {
   two=solve(ind-2,heights,dp)+abs(heights[ind]-heights[ind]-1);
   
   }
   
    
    
    return dp[ind]=min(one,two);
    
    
    
}









int main()
{
    
    int n;
    cout<<"Enter the number of steps:";
    cin>>n;
    cout<<"Enter the height of steps:";
    vector<int>heights;
    int h;
    
    for(int i=0;i<n;i++)
    {
        cin>>h;
        heights.push_back(h);
    }
    
    cout<<solve(n-1,heights,dp);
    
    
    
    
    
    
    
    return 0;
}
