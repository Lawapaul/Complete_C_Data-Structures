#include <iostream>
using namespace std;

bool sorted(int arr[],int size){
    if(size<=1){
        return true;
    }
    if(arr[size-1] >= arr[size-2]){
        return sorted(arr,size-1);
    }
    return false;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    if(sorted(arr,size)){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }
    return 0;
}