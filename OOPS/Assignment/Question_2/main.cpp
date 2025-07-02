#include <iostream>
using namespace std;

class BankAccount{
    static int accountNumber;
    static int balance;
    public: 
    void depost(int amount){
        balance+=amount;
    }
    void withdraw(int amount){
        balance-=amount;
    }
    void getBalance(){
        cout << "Balance: " << balance << endl;
    }
};

int BankAccount::balance = 10000;
int BankAccount::accountNumber = 1234;
int main(){
    BankAccount obj;
    obj.depost(5000);
    obj.depost(2000);
    BankAccount obj2;
    obj2.depost(8000);
    BankAccount obj3;
    obj3.withdraw(3000);
    BankAccount obj4;
    obj4.getBalance();
    return 0;

}