//WAP where user can keep entering numbers till they are multiples of 10

#include <iostream>
using namespace std;

int main(){
    int num;
    while(true){
        cin >> num;
        if(num%10==0){
            break;
        }
    }
}