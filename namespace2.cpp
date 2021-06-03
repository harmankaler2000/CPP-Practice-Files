#include<iostream>
using namespace std;

namespace namespace_1
{
    int value()
    {
        return 10;
    }
}

namespace namespace_2
{
    const double x = 10000;
    double value()
    {
        return 2 * x;
    }
}

int main()
{
    //namespace 1
    cout<<namespace_1::value()<<endl;
    //namespace 2
    cout<<namespace_2::value()<<endl;
    //access x directly
    cout<<namespace_2::x<<'\n';
    return 0;
}