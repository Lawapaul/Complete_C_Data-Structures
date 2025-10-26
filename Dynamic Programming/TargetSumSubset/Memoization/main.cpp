#include <iostream>
using namespace std;

int targetSum(vector<int> nums,int target,int n,vector<vector<int>>& dp){
    if(target==0) return 1;
    if(n < 0) return 0;
    if(dp[n][target]!=-1) return dp[n][target];
    int val = nums[n];
    if(target >= val){
        dp[n][target] = (targetSum(nums,target-val,n-1,dp) ==1 || targetSum(nums,target,n-1,dp) ==1) ? 1: 0;
    }else{
        dp[n][target] = (targetSum(nums,target,n-1,dp)==1) ? 1: 0;
    }
    return dp[n][target];
}
int main(){
    int n,t;
    cin >> n >> t;
    vector<int> nums(n);
    vector<vector<int>> dp(n+1,vector<int>(t+1,-1));
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    if(targetSum(nums,t,n-1,dp)==1){
        cout << "Yes";
    }else{
        cout << "No";
    }
}