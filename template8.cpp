#include<iostream>
using namespace std;

//specialized template
template<class T> void fun(T a)
{
    cout<<"The main template fun()"<<a<<endl;
}

template<> void fun(int a)
{
    cout<<"Specialized template for int type: "<<a<<endl;
}

int main()
{
    fun<char>('a');
    fun<int>(10);
    fun<float>(10.14);
    return 0;
}