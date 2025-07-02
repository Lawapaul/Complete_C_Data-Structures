#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int st=0,end=size-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid] < key){
            st=mid+1;
        }
        if(arr[mid] >key ){
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int size,key;
    cin >> size;
    cin >> key;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << ((binarySearch(arr,size,key)==-1) ? -1 : binarySearch(arr,size,key));
    return 0;
}