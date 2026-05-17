#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    int totsum=0;
    for(int i=0;i<n;i++){
        cin >> nums[i];
        totsum+=nums[i];
    }
    int W = totsum/2;
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(nums[i-1] <= j){
                dp[i][j] = max(nums[i-1] + dp[i-1][j-nums[i-1]],dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << abs(dp[n][W] - (totsum - dp[n][W]));
}