#include<iostream>
using namespace std;

//an abstract class has atleast one vitual function
//1
class Test
{
    int x;
    public:
        virtual void show() = 0;
        int getX(){return 0;}
};

//2
class Base
{
    public:
        virtual void show() = 0;
};

//2
class Derived: public Base
{
    public:
        void show()
        {
            cout<<"In derived\n";
        }
};

//3
//if we do not override the pure virtual function in derived class
//then derived class also becomes abstract class
class A
{
    public:
        virtual void show() = 0;
};

class B: public A{ };

//4
//an abstract class can have constructors
class C
{
    protected:
        int x;
    public:
        virtual void fun() = 0;
        C(int i)
        {
            x = i;
            cout<<"Constructor of C\n";
        }
};

//4
class D: public C
{
    int y;
    public:
        D(int i, int j): C(i){y = j;}
        void fun() {cout<<"x = "<<x<<", y = "<<y<<'\n';}
};

int main()
{
    //1
    //object of abstract class type "Test" is not allowed: --
    // function "Test::show" is a pure virtual function
    //Test t;

    //2
    //We can have pointers and references of abstract class type. 
    Base *b = new Derived;
    b->show();

    //3
    //object of abstract class type "B" is not allowed: 
    //-- pure virtual function "A::show" has no overrider
    //B d;

    //4
    C *ptr = new D(6, 7);
    ptr->fun();
    return 0;
}