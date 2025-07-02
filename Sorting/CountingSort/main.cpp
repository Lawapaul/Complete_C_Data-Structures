#include <iostream>
using namespace std;

int min(int* arr,int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    return min;
}

int max(int* arr,int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}

void CountingSort(int* arr,int size){
    int minvalue = min(arr,size);
    int maxvalue = max(arr,size);
    int freq[100000];
    for(int i=0;i<size;i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=minvalue;i<=maxvalue;i++){
        while(freq[i] > 0){
            arr[j++]=i;
            freq[i]--;
        }
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
    CountingSort(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}