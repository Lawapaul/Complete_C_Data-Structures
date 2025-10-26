#include <iostream>
using namespace std;

int lis(vector<int> arr,int n,int start){
    if(n < 0) return 0;
    int ans1,ans2=0;
    if(arr[n] < start){
        ans1 = 1 + lis(arr,n-1,arr[n]);
    }else{
        ans1 = lis(arr,n-1,start);
    }
    return max(ans1,ans1);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }
    cout << lis(arr,n-1,INT_MAX);
}