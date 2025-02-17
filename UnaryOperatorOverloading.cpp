#include <iostream>
class Number 
{
private:
 int value;
public:
 void setValue(int val) 
 {
 value = val;
 }
 Number operator-() 
 {
 Number result;
 result.value = -value;
 return result;
 }
 void display() 
 {
 std::cout << "Value: " << value << std::endl;
 }
};
int main()
{
 Number num1;
 num1.setValue(10);
 std::cout << "Original "; 
 num1.display();
 Number num2 = -num1; 
 std::cout << "After Unary Minus ";
 num2.display();
 return 0;
}