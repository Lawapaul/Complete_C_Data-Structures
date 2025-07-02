#include <iostream>
using namespace std;


int tilingProblem(int n){
    if(n==1 || n==0){
        return 1;
    }
    //Verticle - tilingProblem(n-1);
    //Horizontal - titlingProblem(n-2);
    return tilingProblem(n-1) + tilingProblem(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << tilingProblem(n);
    return 0;
}