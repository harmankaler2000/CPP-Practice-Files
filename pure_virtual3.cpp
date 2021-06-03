#include<iostream>
using namespace std;

class Base
{
    public:
    //pure virtual destructor
    //error: undefined reference to `Base::~Base()'
    //if the body is not given for the destructor
        virtual ~Base()=0;
};

Base::~Base()
{
    cout<<"\nPure virtual destructor is called\n";
}

class Derived: public Base
{
    public:
        ~Derived()
        {
            cout<<"~Derived is executed";
        }
};

int main()
{
    Base *b = new Derived();
    
    delete b;
    return 0;
}