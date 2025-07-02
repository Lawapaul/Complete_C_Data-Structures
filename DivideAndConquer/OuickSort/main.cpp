#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j] <= pivot){  //descending - arr[j]>=pivot
            swap(&arr[++i],&arr[j]);
        }
    }
    swap(&arr[end],&arr[++i]);
    return i;
}
void quickSort(int arr[],int start, int end){
    if(start>=end){
        return;
    }
    int pivotIdx=partition(arr,start,end);
    quickSort(arr,start,pivotIdx-1); //left
    quickSort(arr,pivotIdx+1,end); //right
}

int main(){
    int size;
    cin >> size;
    int start=0,end=size-1;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    quickSort(arr,start,end);
    cout << "After: "<<endl;
     for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}