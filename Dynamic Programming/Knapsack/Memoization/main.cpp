#include <iostream>
using namespace std;

int knapsack(vector<int> val,vector<int> wt,int W,int n,vector<vector<int>>& dp){
    if(n==0 || W==0) return 0;
    if(dp[n][W]!=-1) return dp[n][W];
    int itemVal = val[n-1];
    int itemWt = wt[n-1];
    if(itemWt <= W){
        //include 
        int ans1= itemVal + knapsack(val,wt,W-itemWt,n-1,dp);
        //exclude
        int ans2 = knapsack(val,wt,W,n-1,dp);
        dp[n][W] = max(ans1,ans2);
    }else{
        //exclude
        dp[n][W] = knapsack(val,wt,W,n-1,dp);
    }
    return dp[n][W];
}
int main(){
    int n,W;
    cin >> n >> W;
    vector<int> val(n);
    vector<int> wt(n);
    vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
    for(int i=0;i<n;i++){
        cin >> val[i];
    }
    for(int i=0;i<n;i++){
        cin >> wt[i];
    }
    cout << knapsack(val,wt,W,n,dp);
}