#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int starting = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << starting << " ";
            starting++;
        }
        cout << endl;
    }
    return 0;
}