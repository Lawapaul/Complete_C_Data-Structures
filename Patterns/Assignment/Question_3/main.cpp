#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int k=i;k>=1;k--){
            cout << k;
        }
        for(int k=2;k<=i;k++){
            cout << k;
        }
        cout << endl;
    }
    return 0;
}