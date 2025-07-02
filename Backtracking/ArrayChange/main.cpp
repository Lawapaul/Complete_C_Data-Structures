#include <iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void change(int arr[],int size,int i){
    if(i==size){
        print(arr,size);
        return;
    }
    arr[i]=i+1;
    change(arr,size,i+1);
    arr[i]-=2;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    change(arr,5,0);
    print(arr,5);
    return 0;

}