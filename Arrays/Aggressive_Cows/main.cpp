#include <iostream>
using namespace std;


bool possible(int val,vector<int>& arr,int cows){
    int initial = arr[0];
    int count=1;
    for(int i=0;i<arr.size();i++){
        if(arr[i] - initial >= val){
            initial=arr[i];
            count++;
        }
        if(count >= cows) return true;
    }
    return (count >= cows);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int cows;
    cin >> cows;
    sort(arr.begin(),arr.end());
    int l=1;
    int h = arr[arr.size()-1] - arr[0];
    int Ans=0;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(possible(mid,arr,cows)){
            Ans=mid;
            l=mid+1;
        }else h=mid-1;
    }
    cout << Ans;

}

class Solution {
  public:
    bool possible(vector<int>& arr,int k,int m){
        int i=0;
        int val = m;
        int count=1;
        while(i < arr.size()){
            if(val-arr[i] < 0){
                val=m;
                count++;
            }else val-=arr[i++];
            if(count > k) return false;
        }
        return (count <= k);
    }
    int bs(vector<int>& arr,int k,int sum){
        int l=0;
        int h=sum;
        int Ans=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(possible(arr,k,mid)){
                Ans=mid;
                h=mid-1;
            }else l=mid+1;
        }
        return Ans;
    }
    int findPages(vector<int> &arr, int k) {
        if(arr.size() < k) return -1;
        int sum=0;
        int Max=0;
        for(auto& it: arr){
            sum+=it;
            Max=max(Max,it);
        }        
        if(k==arr.size()) return Max;
        return bs(arr,k,sum);
        
    }
};