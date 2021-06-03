#include<iostream>
using namespace std;

int main()
{
    try
    {
        //is not implcitly converted to int
        throw 'a';
    }
    catch(int x)
    {
        cout<<"caught "<<x<<endl;
    }
    //catch all block
    catch(...)
    {
        cout<<"catch all";
    }
    return 0;
}