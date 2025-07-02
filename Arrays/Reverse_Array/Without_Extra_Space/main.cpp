#include <iostream>
using namespace std;

void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int arr[],int size){
    int ptr=0,ptr1=size-1;
    while(ptr!=ptr1 && ptr < ptr1){
        swap(&arr[ptr],&arr[ptr1]);
        ptr++;
        ptr1--;
    }
}
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Before: " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    reverse(arr,size);
    cout << "After: " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}