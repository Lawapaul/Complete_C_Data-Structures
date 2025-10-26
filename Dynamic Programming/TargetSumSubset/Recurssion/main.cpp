#include <iostream>
using namespace std;

bool targetSum(vector<int> nums,int target,int n){
    if(target==0) return true;
    if(n < 0) return false;
    int val = nums[n];
    if(target >= val){
        return targetSum(nums,target-val,n-1) || targetSum(nums,target,n-1);
    }else{
        return targetSum(nums,target,n-1);
    }
}
int main(){
    int n,t;
    cin >> n >> t;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    if(targetSum(nums,t,n-1)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}