#include <iostream>
using namespace std;

int change(int n){
    if(n==0){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    int n,prev;
    cin >> n;
    int mutex=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << mutex;
            if(j==1){
                prev=mutex;
            }
            mutex=change(mutex);
        }
        ((prev==1) ? ((mutex!=0) ? mutex=change(mutex): NULL) : ((mutex!=1) ? mutex=change(mutex) : NULL ));
        cout << endl;
    }
    return 0;
}