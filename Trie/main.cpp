#include <iostream>
using namespace std;

int lcs(vector<vector<int>>& dp,string n,string m,int i,int j){
    if(i >= n.size() || j>= m.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(n[i-1]==m[j-1]){
        dp[i][j] = 1 + lcs(dp,n,m,i+1,j+1);
    }else{
        dp[i][j] = max(lcs(dp,n,m,i+1,j),lcs(dp,n,m,i,j+1));
    }
    return dp[i][j];
}
int main(){
    string n;
    string m;
    cin >> n;
    cin >> m;
    vector<vector<int>> dp(n.size()+1,vector<int>(m.size()+1,-1));
    cout << lcs(dp,n,m,1,1);
    string res="";
    int i=n.size();
    int j=m.size();
    while(i>0 && j>0){
        if(n[i-1]==m[j-1]){
            res.push_back(n[i]);
            i--;
            j--;
        }else{
            if(dp[i-1][j] >= dp[i][j-1]){
                i--;
            }else{
                j--;
            }
        }
    }
}