#include<iostream>
using namespace std;

class A
{
    public:
        A& operator = (A &a)
        {
            cout<<"base class assignment operator called\n";
            return *this;
        }
};

class B: public A
{};

int main()
{
    B a, b;
    a.A::operator = (b); //calling base class assignment
    //operator function using derived class
    return 0;
}