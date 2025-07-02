#include <iostream>
using namespace std;

void towerofHanoi(int n,string src,string helper, string destination){
    if(n==1){
        cout << "Transfer disk " << n << " from " << src << " to " << destination << endl;
        return;
    }
    towerofHanoi(n-1,src,destination,helper);
    cout << "Transfer disk " << n << " from " << src << " to " << destination << endl;
    towerofHanoi(n-1,helper,src,destination);

}
int main(){
    int n;
    cin >> n;
    string src="source";
    string helper = "helper";
    string destination = "destination";
    towerofHanoi(n,src,helper,destination);
}