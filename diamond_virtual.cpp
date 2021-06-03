//using virtual base class
#include<iostream>
using namespace std;

class A
{
    public:
    int a;
};

//virtual keyword allows only one copy of A to be generated
class B: virtual public A
{
    public:
    int b;
};

class C: virtual public A
{
    public:
    int c;
};

class D: public B, public C
{
    public:
    int d;
};

int main()
{
    D obj;
    obj.a = 10; //works now
    obj.a = 100; //works now
    //a will become 100 as it is updated
    
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout<<"\n a: "<<obj.a;
    cout<<"\n b: "<<obj.b;
    cout<<"\n c: "<<obj.c;
    cout<<"\n d: "<<obj.d;

    return 0;
}