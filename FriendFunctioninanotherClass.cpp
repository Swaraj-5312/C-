#include <iostream>
using namespace std;

class Base; 

class FriendClass {
public:
    void friendFunction(Base& obj); 
};

class Base {
private:
    int private_variable;
protected:
    int protected_variable;
public:
    Base() {
        private_variable = 10;
        protected_variable = 99;
    }

    
    friend void FriendClass::friendFunction(Base& obj);
};

void FriendClass::friendFunction(Base& obj) {
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable << endl;
}

int main() {
    Base object1;
    FriendClass friendObj;
    friendObj.friendFunction(object1);
    return 0;
}