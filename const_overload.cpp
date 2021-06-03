#include<iostream>
using namespace std;

class Test
{
    protected:
    int x;
    public:
    Test(int i):x(i)
    {}
    //const function
    //const void fun() will not work as compiler cannot distinguish by 
    //const return type
    void fun() const 
    {
        cout<<"Const fun()\n";
    }

    //fun() without const
    void fun()
    {
        cout<<"fun()\n";
    }
};

int main()
{
    Test t1(10);
    const Test t2(20);
    t1.fun();
    t2.fun();
    return 0;
}