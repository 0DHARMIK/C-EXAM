#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    
    Student(string studentName, int studentRollNumber) {
        name = studentName;
        rollNumber = studentRollNumber;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {

    const int size = 3;
    Student students[size] = {
        Student("Alice", 101),
        Student("Bob", 102),
        Student("Charlie", 103)
    };

    for (int i = 0; i < size; ++i) {
        cout << "Student " << i + 1 << ":\n";
        students[i].display();
        cout << endl;
    }

    return 0;
}