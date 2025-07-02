#include <iostream>
using namespace std;

int main(){
    int arr[10]={22,19,18,1,2,3,4,5,6};
    int index,i,size=9;
    cin >> index;
    i=index;
    if(index>=size || index<0){
        cout << "Invalid";
    }
    else{
        while(i<size-1){
            arr[i]=arr[i+1];
            i++;
        }
    }
    size--;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}