#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void InsertionSort(int* arr,int size){
    for(int i=1;i<size;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev] > curr){
            swap(arr[prev],arr[prev+1]);
            prev --;
        }
        arr[prev+1] = curr;
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Sorted: " << endl;
    InsertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}