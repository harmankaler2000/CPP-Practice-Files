#include<iostream>
using namespace std;

class A
{
    public:
    int id;
    //default const
    A()
    {
        cout<<"Default const called: "<<endl;
        id = -1;
    }

    //parameterized const
    A(int x)
    {
        cout<<"Parameterized const called: "<<endl;
        id = x;
    }

    ~A()
    {
        cout<<"Destructor called: "<<id<<endl;
    }
};

class Base
{
    public:
    //pure virtual destructor
    //gives error as no body is provided so provide body
    virtual ~Base() = 0;
};

Base::~Base()
{
    cout<<"Pure virtual destructor is called"<<endl;
}

// gives error as empty body
// Base::~Base(){ }

class Derived : public Base
{
    public:
    ~Derived()
    {
        cout<<"~Derived is executed"<<endl;
    }
};

int main()
{
    A obj1;
    cout<<"A is is: "<<obj1.id<<endl;

    A obj2(2);
    cout<<"A id is: "<<obj2.id<<endl;

    A obj3;
    obj3.id = 7;
    int i = 0;
    while(i < 5)
    {
        A obj4;
        obj4.id = i;
        i++;
    }//scope for obj4 end

    Base *b = new Derived();
    delete b;
    return 0;
}//scope for rest of obj ends here