#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 'x';
    }
    catch(int x)
    {
        cout<<"caught int "<<x;
    }
    catch(...)
    {
        cout<<"Default catch block\n";
    }
}