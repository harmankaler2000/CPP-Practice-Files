#include<iostream>
using namespace std;

//default parameters in template
template<class T, class U = char> class A
{
    public:
        T x;
        U y;
        A()
        {
            cout<<"Constructor called\n";
        }
};

int main()
{
    //calls A<char,char>
    A<char> a;
    return 0;
}