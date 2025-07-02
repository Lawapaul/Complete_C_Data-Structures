
// Jake, a sales representative, recorded the number of sales made each week of the month. 
// He needs to sort the sales figures at odd positions in descending order and those at even positions 
// in ascending order using insertion sort. This sorting will help him analyze the performance trends effectively.

#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sortEven(int arr[],int n){
    for(int i=2;i<n;i+=2){
        int curr=arr[i];
        int prev=i-2;
        while(prev>=0 && arr[prev] > arr[prev+2]){
            swap(arr[prev+2],arr[prev]);
            prev-=2;
        }
        arr[prev+2]=curr;
    }
}
void sortOdd(int arr[],int n){
    for(int i=1;i<n;i+=2){
        int curr=arr[i];
        int prev=i-2;
        while(prev>=0 && arr[prev] < arr[prev+2]){
            swap(arr[prev+2],arr[prev]);
            prev-=2;
        }
        arr[prev+2]=curr;
    }
}
int main(){
    int n;
    int arr_demo[4]={10,20,30,40};
    sortEven(arr_demo,4);
    sortOdd(arr_demo,4);
    for(int i=0;i<4;i++){
        cout << arr_demo[i] << " ";
    }
    return 0;
}