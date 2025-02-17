#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle: public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    Shape* shape = new Shape();
    shape->draw();  

    Shape* circle = new Circle();
    circle->draw(); 

    return 0;
}
