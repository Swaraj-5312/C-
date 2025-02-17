#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollno;
    string name;

    void setData(int r, string n) {
        rollno = r;
        name = n;
    }

    void display() {
        cout << "Roll Number: " << rollno << ", Name: " << name << endl;
    }
};

void printByValue(Student s) {
    cout << "Inside printByValue function (Pass by Value):" << endl;
    s.display();
    s.name = "Modified"; 
}

void printByReference(Student &s) {
    cout << "Inside printByReference function (Pass by Reference):" << endl;
    s.display();
    s.name = "Modified"; 
}

int main() {
    Student obj;
    obj.setData(1, "Aarav Sharma");

    printByValue(obj);
    cout << "After printByValue function: ";
    obj.display();

    printByReference(obj);
    cout << "After printByReference function: ";
    obj.display();

    return 0;
}
