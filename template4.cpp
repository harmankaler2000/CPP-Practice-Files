#include<iostream>
using namespace std;

//classes as template types
template<class T, class U> class A
{
    T x;
    U y;
    public:
        A()
        {
            cout<<"Constructor called\n";
        }
};

int main()
{
    A<char, char> a;
    A<int, double> b;
    return 0;
}