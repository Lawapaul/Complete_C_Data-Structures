#include <iostream>
#include <map>
using namespace std;


int MaxSubarraySum0(vector<int>& array){
    int Max=0;
    unordered_map<int,int> map;
    map[0]=-1;
    int sum=0;
    for(int i=0;i<array.size();i++){
        sum+=array[i];
        if(map.count(sum)){
            Max=max(Max,i-map[sum]);
        }else{
            map[sum]=i;
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