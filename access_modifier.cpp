#include<iostream>
using namespace std;

//public class
class Circle
{
    public:
    double radius;
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};

//private access modifier
class Rectangle
{
    //private data member
    private:
        double length = 1.5;
        double breadth = 2.2;
    //public member function
    public:
        double compute_sqaure__area()
        {
            //can access private members
            return length * breadth;
        }
};

//base class
class Parent
{
    //protected data members
    protected:
        int id_protected;
};

//sub class or derived class from public base class
class Child : public Parent
{
    public:
    void setId(int id)
    {
        //child class is able to access the inherited
        //protected data members
        id_protected = id;
    }

    void displayId()
    {
        cout<<"id_protected is: "<<id_protected<<endl;
    }
};

//defining member function outside the class
class A
{
    public:
    string name;
    int id;
    //not defined inside the class
    void printname();

    //defined inside class
    void printid()
    {
        cout<<"Id is: "<<id<<endl;
    }
};

void A::printname()
{
    cout<<"Name is: "<<name<<endl;
}

int main()
{
    Circle obj;
    //accessing public datamember outside class
    obj.radius = 5.5;
    cout<<"Radius is: "<<obj.radius<<"\n";
    cout<<"Area is: "<<obj.compute_area()<<endl;

    Rectangle obj1;
    //error: trying to access private data members directly
    //outside the class
    // obj1.length = 1.5;
    // obj1.breadth = 2.2;
    cout<<"Area is: "<<obj1.compute_sqaure__area()<<endl;

    //member function of the derived class can access the protected
    //data members of the base class 
    Child obj2;
    obj2.setId(81);
    obj2.displayId();
    
    //defined functions in and outside class
    A obj3;
    obj3.name = "Harman";
    obj3.id = 10;
    obj3.printname();
    obj3.printid();
    return 0;
}