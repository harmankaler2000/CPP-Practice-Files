#include<iostream>
using namespace std;

class Test
{
    public:
        //virtual members cannot be static
        // not allowed to have virtual, const and volatile static data members
        // virtual static void fun()
        // {}

        // virtual void fun() const{}
};