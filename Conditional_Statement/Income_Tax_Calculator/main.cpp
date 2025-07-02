#include <iostream>
using namespace std;

int main(){
    int income;
    cin >> income;
    if(income < 5){
        cout << "0% Tax";
    }
    else if(income >=5 && income < 10){
        cout << "20% Tax";
    }
    else{
        cout << "30% Tax";
    }
    return 0;
}