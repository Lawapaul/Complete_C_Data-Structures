#include <iostream>
using namespace std;

int minimum(vector <int> arr,int start,int end,int min){
    if(start>=end){
        return min;
    }
    int mid=start+(end-start)/2;
    if(arr[mid] < min){
        min=arr[mid];
    }
    if(arr[start] < arr[mid]){
        if(arr[mid+1] < arr[mid]){
            return minimum(arr,mid+1,end,min);
        }
        return minimum(arr,start,mid-1,min);
    }
    else{
        return minimum(arr,mid+1,end,min);
    }
}

int main(){
    vector <int> array;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int num;
        cin >> num;
        array.push_back(num);
    }
    int start=0;
    int end=array.size()-1;
    int min=INT_MAX;
    
    
}
