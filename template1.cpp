#include<iostream>
using namespace std;

//one function for all data types. this even works
//for user defined types if operator '>' is overloaded
template<typename T> T max_find(T x, T y)
{
    return (x > y)> x: y;
}

int main()
{
    cout<<max_find<int>(3,7)<<endl;
    cout<<max_find<double>(3.0,7.0)<<endl;
    cout<<max_find<int>('g','e')<<endl;
    return 0;
}