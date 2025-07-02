#include <iostream>
using namespace std;

void swap(int*a ,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubbleSort(int arr[],int size){
        for(int i=)
        int curr=arr[i];
        int prev=i-1;
        for(int j=)
}
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    BubbleSort(arr,size);
    cout << "Sorted: " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}