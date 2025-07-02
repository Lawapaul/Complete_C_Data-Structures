#include <iostream>
#include <cmath>
using namespace std;

bool palindrome(int num,int length){
    int sum=0;
    int temp=num;
    while(num>0){
        sum+=(num%10)*pow(10,length-1);
        length--;
        num/=10;
    }
    return ((sum==temp)? true : false);
}
int main(){
    int num;
    cin >> num;
    cout << ((palindrome(num,3)? "Palindrome" : "Not Palindrome"));
    return 0;
}