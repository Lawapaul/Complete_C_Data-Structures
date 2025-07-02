#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp=n;
    int starting = 2*n-2;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout << "*";
        }
        for(int k=1;k<=starting;k++){
            cout << " ";
        }
        for(int k=1;k<=i;k++){
            cout << "*";
        }
        temp--;
        starting = 2*temp-2;
        cout << endl;
    }
    int rev_starting=n;
    int space=0;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=rev_starting;k++){
            cout << "*";
        }
        for(int k=1;k<=space;k++){
            cout << " ";
        }
        for(int k=1;k<=rev_starting;k++){
            cout << "*";
        }
        rev_starting--;
        space+=2;
        cout << endl;

    }
    return 0;
}