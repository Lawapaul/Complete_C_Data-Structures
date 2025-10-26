#include <iostream>
using namespace std;

int lcs(string s1,string s2,int i, int j,vector<vector<int>>& dp,int& ans){
    if(i< 0 || j < 0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]){
        dp[i][j] = 1 + lcs(s1,s2,i-1,j-1,dp,ans);
    }else{
        dp[i][j] = 0;
    }
    ans = max(ans,dp[i][j]);
    return dp[i][j];
}
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int ans=0;
    vector<vector<int>> dp(s1.size(),vector<int>(s2.size(),-1));
    lcs(s1,s2,s1.size()-1,s2.size()-1,dp,ans);
    cout << ans;
}