#include <iostream>
using namespace std;

void merge_array(int start,int end,int mid,int arr[]){
    vector <int> result;
    int ptr=start;
    int ptr_end=mid+1;
    while(ptr <= mid && ptr_end<=end){
        if(arr[ptr] > arr[ptr_end]){
            result.push_back(arr[ptr_end]);
            ptr_end++;
        }
        else{
            result.push_back(arr[ptr]);
            ptr++;
        }
    }
    while(ptr<=mid){
        result.push_back(arr[ptr]);
        ptr++;
    }
     while(ptr_end<=end){
        result.push_back(arr[ptr_end]);
        ptr_end++;
    }
    for(int i=0;i<result.size();i++){
        arr[start+i]=result[i];
    }
}
void sort_array(int start,int end,int arr[]){
    if(start >= end){
        return;
    }
    int mid=start + (end-start)/2;
    sort_array(start,mid,arr); //left
    sort_array(mid+1,end,arr); //right
    merge_array(start,end,mid,arr);
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int start=0;
    int end=size-1;
    sort_array(start,end,arr);
    cout << "Sorted" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
    
}