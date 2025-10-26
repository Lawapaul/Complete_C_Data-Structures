#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        map[arr[i]]++;
    }
    for(auto& it: map){
        cout << it.first << " ";
    }
    return 0;
}