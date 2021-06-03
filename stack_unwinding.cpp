#include<iostream>
using namespace std;

//a sample function f1() that throws an int exception
void f1() throw (int)
{
    cout<<"f1() start\n";
    throw 100;
    cout<<"f1() end\n";
}

//another sample function f2() that calls f1()
void f2() throw (int)
{
    cout<<"f2() start\n";
    f1();
    cout<<"f2() end\n";
}

//another sample function f3() that calls f2() and handles exception thrown
void f3()
{
    cout<<"f3() start\n";
    try
    {
        f2();
    }
    catch(int i)
    {
        cout<<"caught exception "<<i;
    }
}

int main()
{
    f3();
    return 0;
}