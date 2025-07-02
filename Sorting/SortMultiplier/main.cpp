#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sorting(int arr[],int result[],int n,int multiplier[]){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min=j;
            }
        }
            swap(multiplier[min],multiplier[i]);
            swap(arr[min],arr[i]);
        }
    for(int i=0;i<n;i++){
        result[i]=arr[i]*multiplier[i];
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    int multiplier[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cin >> multiplier[i];
    }
    int result[n];
    sorting(arr,result,n,multiplier);
    for(int i=0;i<n;i++){
        cout << result[i] << " ";
    }


}