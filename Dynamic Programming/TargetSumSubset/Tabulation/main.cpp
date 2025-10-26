#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    vector<int> nums(n);
    vector<vector<int>> dp(n+1,vector<int>(t+1,0));
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=t;j++){
            if(nums[i-1] <= j){
                dp[i][j] = max(nums[i-1] + dp[i-1][j-nums[i-1]], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    if(dp[n][t]==t){
        cout << "Yes";
    }else{
        cout << "No";
    }
}