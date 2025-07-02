#include <iostream>
using namespace std;

int Search(int arr[],int key,int st,int ed){
    int mid=(st+ed)/2;
    if(st>=ed){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid] > key){
        return Search(arr,key,st,mid-1);
    }
    else{
        return Search(arr,key,mid+1,ed);
    }

}
int main(){
    int size,key,st=0;
    cin >> size >> key;
    int ed=size-1;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << Search(arr,key,st,ed);
    return 0;
}