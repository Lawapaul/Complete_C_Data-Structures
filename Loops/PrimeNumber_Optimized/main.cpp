#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    bool flag=true;
    if(num==0 || num ==1 ){
        cout << "Not prime";
        return 0;
    }
    else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                cout << "Not Prime";
                return 0;
            }
        }
    }
    cout << "Prime";
    return 0;
}