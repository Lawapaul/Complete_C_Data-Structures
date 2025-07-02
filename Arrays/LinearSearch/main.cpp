#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
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
    cout << ((linearSearch(arr,size,key)==-1) ? -1 : linearSearch(arr,size,key));
    return 0;
}