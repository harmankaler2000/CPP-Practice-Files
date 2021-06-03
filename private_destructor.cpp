#include<iostream>
using namespace std;

//class with private destructor
class Test
{
    private:
    ~Test() {}
    //if you want a private constructor and no compiler error as
    //having a private destructor gives error if an object is defined
    //but doesn't if no object is defined
    //hence use a friend function to delete that
    friend void destructTest(Test* ptr)
    {
        cout<<"object deleted\n";
        delete ptr;
    }
};

int main()
{
    Test *ptr = new Test;
    //destruct the object
    destructTest(ptr);
}