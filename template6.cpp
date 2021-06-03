#include<iostream>
using namespace std;

//static variable is assigned to each call . it is not shared by the template calls
template<typename T> void fun(const T& x)
{
    static int i = 10;
    cout<<++i<<endl;
    return;
}

int main()
{
    //prints 11
    fun<int>(1);
    //prints 12
    fun<int>(2);
    //prints 11
    fun<double>(1.1);
    return 0;
}