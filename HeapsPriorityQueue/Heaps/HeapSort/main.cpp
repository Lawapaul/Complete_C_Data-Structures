#include <iostream>
using namespace std;

void heapify(vector<int>& array,int n,int i){
    if(i>=n){
        return;
    }
    int Max=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && array[l] > array[Max]){
        Max=l;
    }
    if(r<n && array[r] > array[Max]){
        Max=r;
    }
    if(Max!=i){
        swap(array[Max],array[i]);
        heapify(array,n,Max);
    }
}
void heapSort(vector<int>& array){
    int n=array.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(array,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(array[0],array[i]);
        heapify(array,i,0);
    }
}
int main(){
    vector<int> array;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    heapSort(array);
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
}