#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp=n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout << " ";
        }
        for(int k=1;k<=(2*temp)-1;k++){
            cout << "*";
        }
        for(int k=1;k<i;k++){
            cout << " ";
        }
        temp--;
        cout << endl;
    }
    return 0;
}