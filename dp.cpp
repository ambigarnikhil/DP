#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
/*
int nsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+i;
    }
    return dp[n];
}
int main()
{
    cout<<nsum(5)<<endl;
}
*/

/*
int climbstairs(int n)
{
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    cout<<climbstairs(5)<<endl;
}
*/