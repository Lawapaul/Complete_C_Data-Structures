#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void SelectionSort(int* arr,int size){
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
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
    SelectionSort(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}