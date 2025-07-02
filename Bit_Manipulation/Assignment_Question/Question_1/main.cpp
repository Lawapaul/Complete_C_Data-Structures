// Question 1 : Write a Function to clear the range of bits from i to j in a given number.
// (i & j are counted backwards from the right end of the number)

#include <iostream>
using namespace std;

void clear(int i,int j,int n){
    int a=(~0) << (j+1);
    int b=~((~0) << (i));
    int mask=(a|b);
    cout << (n&mask);
}


int main(){
    int n,i,j;
    cin >> n;
    cin >> i >> j;
    clear(i,j,n);
    return 0;
}
