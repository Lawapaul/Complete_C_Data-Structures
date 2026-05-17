#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int mcm(int i, int j, vector<int>& arr) {
    if (i == j) return 0;
    int ans = INT_MAX;
    for (int k = i; k < j; k++) {
        int cost = mcm(i, k, arr) + mcm(k + 1, j, arr) + arr[i - 1] * arr[k] * arr[j];
        ans = min(ans, cost);
    }
    return ans;
}

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << mcm(1, n - 1, arr) << endl;
    return 0;
}