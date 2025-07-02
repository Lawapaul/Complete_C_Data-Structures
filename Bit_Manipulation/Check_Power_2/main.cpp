#include <iostream>
using namespace std;

bool power(int a){
    if((a&(a-1))==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    if(power(n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}