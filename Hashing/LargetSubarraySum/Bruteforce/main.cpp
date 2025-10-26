#include <iostream>
using namespace std;


int MaxSubarraySum0(vector<int>& array){
    int Max=0;
    for(int i=0;i<array.size();i++){
        int sum=array[i];
        if(sum==0){
            Max=max(Max,1);
        }
        for(int j=i+1;j<array.size();j++){
            sum+=array[j];
            if(sum==0){
                Max=max(Max,j-i+1);
            }
        }
    }
    return Max;
}

int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << MaxSubarraySum0(array);
}