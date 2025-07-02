#include <iostream>
using namespace std;

int main(){
    int num;
    do{
        cin >> num;
        if(num%10==0){
            continue;
        }
        else{
            cout << "Entered: " << num << endl;
        }
    }
    while(true);
}