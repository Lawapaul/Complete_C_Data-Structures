#include <iostream>
using namespace std;

void heapify(int idx,vector<int>& array,int n){
    int l=2*idx+1;
    int r=2*idx+2;
    int Max=idx;
    if(l < n && array[l] > array[Max]){
        Max=l;
    }
    if(r < n && array[r] > array[Max]){
        Max=r;
    }
    if(Max!=idx){
        swap(array[Max],array[idx]);
        heapify(Max,array,n);
    }

}
void heapSort(vector<int>& array){
    for(int i=(array.size()/2)-1;i>=0;i--){
        heapify(i,array,array.size());
    }
    for(int i=array.size()-1;i>=0;i--){
        swap(array[i],array[0]);
        heapify(0,array,i);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    heapSort(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}