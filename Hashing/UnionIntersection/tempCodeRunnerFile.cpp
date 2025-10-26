#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;


void Union(vector<int>& arr1,vector<int>& arr2){
    map<int,int> map;
    for(int i=0;i<arr1.size();i++){
        map[arr1[i]]++;
    }
    for(int i=0;i<arr2.size();i++){
        map[arr2[i]]++;
    }
    for(auto& it: map){
        cout << it.first << " ";
    }
}
void Intersection(vector<int>& arr1,vector<int>& arr2){
    unordered_set<int> map;
    for(int i=0;i<arr1.size();i++){
        map.insert(arr1[i]);
    }
    vector<int> res;
    for(int i=0;i<arr2.size();i++){
            while(map.find(arr2[i]) != map.end()){
                res.push_back(arr2[i]);
                map.erase(arr2[i]);
        }
    }
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> arr1(n);
     vector<int> arr2(m);
    for(int i=0;i<n;i++){
        cin >> arr1[i]; 
    }
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    if(arr1.size() >= arr2.size()){
           Intersection(arr1,arr2);
    }else{
         Intersection(arr2,arr1);
    }
}