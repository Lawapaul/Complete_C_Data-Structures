#include <iostream>
using namespace std;


void AllOccurrence(int arr[],int size,int key,int i){
    if(i<size && arr[i]==key){
        cout << i << " ";
    }
    if(i<size){
        AllOccurrence(arr,size,key,i+1);
    }
    return;
}
int main(){
    int size,key;
    cin >> size;
    cin >> key;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int i=0;
    AllOccurrence(arr,size,key,i);
    return 0;
}