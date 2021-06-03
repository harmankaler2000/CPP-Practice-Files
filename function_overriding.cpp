#include<iostream>
using namespace std;

class base
{
    public:
    //virtual function
    virtual void print()
    {
        cout<<"Print base\n";
    }

    //non virtual function
    void show()
    {
        cout<<"Show base\n";
    }
};

class derived: public base
{
    public:
    void print()
    {
        cout<<"Print derived\n";
    }

    void show()
    {
        cout<<"Show derived\n";
    }
};

int main()
{
    base *b;
    derived d;
    b = &d;
    //virtual function bound at runtime
    b->print();
    //non virtual function binded at compile time
    b->show();

    return 0;
}