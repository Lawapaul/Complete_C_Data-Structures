#include <iostream>
using namespace std;

int stairs(int n,vector<int>& dp){
    if(n==0 || n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] = stairs(n-1,dp) + stairs(n-2,dp);
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1,-1);
    cout << stairs(n,dp);
}