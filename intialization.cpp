//initialization of data members
#include<iostream>
using namespace std;

class Test
{
    private:
    //if int y,x y prints garbage valuehence write int x,y
    int x,y;

    public:
    //if you have done int y, x
    //instead write this for default const
    //Test(): x(y - 10), y(20)
    Test() : x(10), y(x + 10) {}
    void print()
    {
        cout<<"x = "<<x<<" y = "<<y;
    }
};

int main()
{
    Test t;
    t.print();
    return 0;
}