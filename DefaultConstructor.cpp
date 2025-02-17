#include <iostream> 
class MyClass  
{   
private:  
int myVariable;  
public:  
MyClass()   
{   
myVariable = 0;  
}   
void displayValue()   
{ 
std::cout << "The value is: " << myVariable << std::endl;   
} 
}; 
int main()  {   
MyClass myObject;    
myObject.displayValue();  
return 0; 
} 
