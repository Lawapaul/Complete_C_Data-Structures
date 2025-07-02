#include <iostream>
using namespace std;

int min(int a,int b){
    return (a<b)? a: b;
}
int max(int a,int b){
    return (a>b)? a: b;
}
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int MaxWater(vector<int> height,int size){
    int sum=0;
    vector <int> leftmax={INT_MIN};
    vector <int>rightmax={INT_MIN};
    for(int i=1;i<size;i++){
        leftmax.push_back(max(leftmax[i-1],height[i-1]));
        rightmax.push_back(max(rightmax[i-1],height[size-i]));
    }
    int ptr=0;
    int ptr1=size-1;
    while(ptr<ptr1){
        swap(&rightmax[ptr],&rightmax[ptr1]);
        ptr++;
        ptr1--;
    }
    for(int i=1;i<size-1;i++){
        int mini=min(leftmax[i],rightmax[i]);
        if(mini-height[i]>=0){
            sum+=mini-height[i];
        }
    }
    cout << sum;
    return 0;
    
}
int main(){
    vector <int> height;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int num;
        cin >> num;
        height.push_back(num);
    }
    MaxWater(height,size);

}