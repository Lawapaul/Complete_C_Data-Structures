#include <iostream>
using namespace std;

int knapsack(vector<int> val,vector<int> wt,int W,int n,vector<vector<int>>& dp){
    for(int i=1;i<=val.size();i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1]<=j){
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}
int main(){
    int n,W;
    cin >> n >> W;
    vector<int> val(n);
    vector<int> wt(n);
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int i=0;i<n;i++){
        cin >> val[i];
    }
    for(int i=0;i<n;i++){
        cin >> wt[i];
    }
    cout << knapsack(val,wt,W,n,dp);
}