#include <iostream>
using namespace std;

void power(int n,int pow){
    int ans=1;
    while(pow>0){
        int lastdigit=(pow&1);
        if(lastdigit){
            ans*=n;
        }
        n*=n;
        pow=(pow>>1);
    }
    cout << ans;
}
int main(){
    int n,pow;
    cin >> n >> pow;
    power(n,pow);
    return 0;
}