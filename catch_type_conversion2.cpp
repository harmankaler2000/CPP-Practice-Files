#include<iostream>
using namespace std;

class Except1 {};

class Except2
{
    public:
        //conversion constructor
        Except2 (const Except1 &e)
        {
            cout<<"Conversion constructor called\n";
        }
};

int main()
{
    try
    {
        Except1 exp1;
        throw exp1;
    }
    catch(Except2 e2)
    {
        cout<<"Caught Except2\n";
    }
    catch(...)
    {
        cout<<"Default catch block\n";
    }
    return 0;
}