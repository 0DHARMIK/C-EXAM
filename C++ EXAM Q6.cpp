#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;

public:
    Employee(string _name, int _age) : name(_name), age(_age) {}


    int operator-(const Employee& other) const {
        return abs(age - other.age);
    }

    int getAge() const {
        return age;
    }
};

int main() {
    
    Employee emp1("John", 30);
    Employee emp2("Alice", 25);


    int ageDifference = emp1 - emp2;

    
    cout << "Age difference between " << emp1.getAge() << " and " << emp2.getAge() << " is " << ageDifference << " years." << endl;

    return 0;
}