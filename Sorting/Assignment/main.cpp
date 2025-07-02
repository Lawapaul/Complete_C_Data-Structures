#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

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

void print(int* arr){
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
}
void BubbleSort(int* arr){
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void SelectionSort(int* arr){
    for(int i=0;i<10;i++){
        int min=i;
        for(int j=i+1;j<10;j++){
            if(arr[j] > arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
void InsertionSort(int* arr){
    for(int i=1;i<10;i++){
        int curr = arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev] > curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void CountingSort(int* arr){
    int freq[10000] = {0};
    int minvalue=min(arr,10);
    int maxvalue = max(arr,10);
    for(int i=0;i<10;i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=maxvalue-minvalue;i>=0;i--){
        while(freq[i] > 0){
            arr[j++]=i;
            freq[i]--;
        }
    }

}
int main(){
    int arr[10] = {3,6,2,1,8,7,4,5,3,1};
    CountingSort(arr);
    cout << "Counting Sort: " << endl;
    print(arr);
    return 0;
}