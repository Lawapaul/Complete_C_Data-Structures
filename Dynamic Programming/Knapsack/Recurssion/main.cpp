#include <iostream>
using namespace std;

int knapsack(vector<int> val,vector<int> wt,int W,int n){
    if(n==0 || W==0) return 0;
    int itemVal = val[n-1];
    int itemWt = wt[n-1];
    if(itemWt <= W){
        //include 
        int ans1= itemVal + knapsack(val,wt,W-itemWt,n-1);
        //exclude
        int ans2 = knapsack(val,wt,W,n-1);
        return max(ans1,ans2);
    }else{
        //exclude
        return knapsack(val,wt,W,n-1);
    }
}
int main(){
    int n,W;
    cin >> n >> W;
    vector<int> val(n);
    vector<int> wt(n);
    for(int i=0;i<n;i++){
        cin >> val[i];
    }
    for(int i=0;i<n;i++){
        cin >> wt[i];
    }
    cout << knapsack(val,wt,W,n);
}