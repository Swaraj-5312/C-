#include <iostream> 
using namespace std; 

inline int square(int num)  
{ 
 return num * num; 
} 
int main()  
{ 
 int x = 5; 
 int result;  
 result = square(x); 
 cout << "Square of " << x << " is: " << result << endl; 
 return 0; 
} 
