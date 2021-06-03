#include<iostream>
using namespace std;

class Test
{
    public:
    Test(){}
    Test(const Test &t)
    {
        cout<<"Copy constructor called\n";
    }

    //returns a reference to the current object
    Test& operator = (const Test &t)
    {
        cout<<"Assignment operator called\n";
        return *this;
    }
};

int main()
{
    Test t1, t2;
    t2 = t1;
    Test t3 = t1;
    getchar();
    return 0;
}