#include <iostream>
using namespace std;

void binaryString(int n,int lastplace,string empty){
    if(n==0){
        cout << empty << " ";
        return;
    }
    if(lastplace!=1){
        binaryString(n-1,0,empty+'0');
        binaryString(n-1,1,empty+'1');
    }
    else{
        binaryString(n-1,0,empty+'0');
    }
}
int main(){
    int n;
    string empty="";
    int lastplace=0;
    binaryString(3,lastplace,empty);
    return 0;

}