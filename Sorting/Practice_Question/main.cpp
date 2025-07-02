// Sort array of characters using insertion sort in descending order;
#include <iostream>
using namespace std;



void swap(char* a,char* b){
    char temp=*a;
    *a=*b;
    *b=temp;
}

void InsertionSort(char* arr,int size){
    for(int i=1;i<size;i++){
        int curr = arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev] < curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}
int main(){
    char arr[6]={'f','b','a','e','c','d'};
    InsertionSort(arr,6);
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
}