#include <iostream>
#include <string>
using namespace std;


class User{
    int id;
    public:
        string username;
        string password;
    
    User(int id){
        this->id=id;
    }
    void setPassword(string password){
        this->password=password;
    }
    void getPassword(){
        cout << "Username: " << username  << endl << "Password: " << password << endl << "ID: "<< id;
    }
};
int main(){
    User u1(1471);
    u1.setPassword("shekhawat");
    u1.getPassword();
    return 0;
}