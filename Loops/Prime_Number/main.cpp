#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = true;
    if(n==0 || n==1){
        cout << "Not prime";
        return 0;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=false;
                break;
            }
        }
    }
    cout  << ((flag) ? "Prime" : "Not prime");
    return 0;
}