#include <iostream>

class xyz {
public:
    xyz() {
        std::cout << "\nConstructor was called";
    }

    ~xyz() { 
        std::cout << "\nDestructor was called";
    }
};

int main() {
    xyz B; 
    std::cin.get(); 
    return 0;
}