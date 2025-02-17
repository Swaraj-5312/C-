#include <iostream>

class MyClass {
private:
    int num1, num2, sum;

public:
    
    MyClass(int a, int b) {
        num1 = a;
        num2 = b;
        sum = num1 + num2;
    }

    
    void displaySum() {
        std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    }
};

int main() {
    int n1, n2;
    std::cout << "Enter two numbers: ";
    std::cin >> n1 >> n2;

    
    if (std::cin.fail()) {
        std::cout << "Invalid input. Please enter two integers." << std::endl;
        return 1; 
    }

    MyClass obj1(n1, n2); 
    obj1.displaySum(); 

    return 0;
}