//Memoization
#include<bits/stdc++.h>
using namespace std;


int solve(int n,int dp[])
{
    
    if(n<=1)
    {
        return n ;
    }
    
    if(dp[n]!=-1)
    {
      return dp[n];   
    }
    
    
    return dp[n]=solve(n-1,dp)+solve(n-2,dp);
    
    
}



int main()
{
    int req;
    cout<<"Enter the num:";
    cin>>req;
    int dp[req+1];
    memset(dp,-1,sizeof(dp));
    cout<<solve(req,dp);
  
     return 0;
}

//Tabular form
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int req;
    cout<<"Enter the num:";
    cin>>req;
    int dp[req+1];
    dp[0]=0;
    dp[1]=1;
    
    
    for(int i=2;i<=req;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    cout<<dp[req];
    
    return 0;
}

