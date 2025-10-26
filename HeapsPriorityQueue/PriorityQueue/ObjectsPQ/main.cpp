#include <queue>
#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int marks;
        Student(string name,int marks){
            this->name = name;
            this->marks = marks;
        }
        bool operator < (const Student &obj) const{
            return this->marks < obj.marks;
        }
};
int main(){
    priority_queue<Student> pq;
    pq.push(Student("Harshit",90));
    pq.push(Student("Gajraj",94));
    pq.push(Student("Rajani",88));
    while(!pq.empty()){
        cout << pq.top().name << endl;
        pq.pop();
    }
}