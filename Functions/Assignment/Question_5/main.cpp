#include <iostream>
using namespace std;


int char_find(char a){
    if((a+0)==122 ){
        return 'a';
    }
    else if((a+0)==90){
        return 'A';
    }
    else{
        return a+1;
    }
}
int main(){
    char a;
    cin >> a;
    cout << (char)char_find(a);
    return 0;
}