//diamond problem using scope resolution problem
#include<iostream>
using namespace std;

class A
{
    public:
    int a;
};

class B: public A
{
    public:
    int b;
};

class C: public A
{
    public:
    int c;
};

class D: public B, public C
{
    public:
    int d;
};

void main()
{
    D obj;
    //obj.a = 10;   //statement 1: error as it is ambiguous
    //obj.a = 100;  // statement 2: error as it is ambiguous

    //use scope resolution
    obj.B::a = 10;
    obj.C::a = 100;

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout<<"\n a from B is: "<<obj.B::a<<endl;
    cout<<"\n a from C is: "<<obj.C::a<<endl;

    cout<<"b: "<<obj.b<<endl;
    cout<<"c: "<<obj.c<<endl;
    cout<<"d: "<<obj.d<<endl;
}