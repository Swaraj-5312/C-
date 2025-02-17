#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollno;
    string sname;
    float marks;

    void getData(); 
    void putData(); 
};

void Student::getData() {
    cout << "Enter Roll Number: ";
    cin >> rollno;
    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, sname);
    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::putData() {
    cout << "Roll Number: " << rollno << endl;
    cout << "Name: " << sname << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    Student obj1, obj2;
    cout << "Enter details for Student 1:" << endl;
    obj1.getData();
    cout << "\nEnter details for Student 2:" << endl;
    obj2.getData();
    cout << "\nDetails of Student 1:" << endl;
    obj1.putData();
    cout << "\nDetails of Student 2:" << endl;
    obj2.putData();
    return 0;
}