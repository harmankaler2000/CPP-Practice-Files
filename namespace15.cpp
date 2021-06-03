#include<iostream>
using namespace std;

int x = 20;

namespace outer
{
    int x = 10;
    namespace inner
    {
        int z = x;
        //x refers to outer::x not the global x
    }
}

int main()
{
    cout<<outer::inner::z;
    return 0;
}