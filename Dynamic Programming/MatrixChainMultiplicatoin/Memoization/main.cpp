#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int mcmMemo(int i, int j, vector<int>& arr, vector<vector<int>>& dp) {
    if (i == j) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int minCost = INT_MAX;
    for (int k = i; k < j; k++) {
        int cost = mcmMemo(i, k, arr, dp) +
                   mcmMemo(k + 1, j, arr, dp) +
                   arr[i - 1] * arr[k] * arr[j];
        minCost = min(minCost, cost);
    }
    return dp[i][j] = minCost;
}

int main() {
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;
    vector<int> arr(n + 1);
    cout << "Enter dimensions: ";
    for (int i = 0; i <= n; i++) cin >> arr[i];
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    cout << "Minimum number of multiplications: " 
         << mcmMemo(1, n, arr, dp) << endl;

    return 0;
}