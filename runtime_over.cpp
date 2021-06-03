#include<iostream>
using namespace std;

//runtime overloading
class Shape
{
    public:
        Shape(int l, int w)
        {
            length = l;
            width = w;
        }
        int get_Area()
        {
            cout<<"This is call to parent class Area\n";
            return 0;
        }

    protected:
        int length, width;
};

//derived class
class Sqaure: public Shape
{
    public:
        Sqaure(int l = 0, int w = 0): Shape(l, w)
        {}//declaring and initializing derived class constructor

        int get_Area()
        {
            cout<<"Sqaure area: "<<length * width<<endl;
            return (length * width);
        }
};

class Rectangle: public Shape
{
    public:
        Rectangle(int l = 0, int w = 0): Shape(l, w)
        {}
    int get_Area()
    {
        cout<<"Rectangle Area: "<<length * width<<endl;
        return (length * width);
    }
};

int main()
{
    Shape* s;
    Sqaure sq(5, 5); //making object of child class square
    Rectangle rec(4,5);//making object of child class rectangle
    s = &sq;
    s->get_Area();
    s = &rec;
    s->get_Area();
    return 0;
}

//we store the address of each child class Rectangle and Sqaure object
//in s and then we call the get_Area() function on it
//it should give the respective get_Area() of child classes but instead 
//calls that of the parent class
//this is due to static linkage i.e. get_Area() is getting
//only once by the compiler which is in the base class