#include<iostream>
using namespace std;

//this function signature is fine by the compiler, but not recommended
//the function should specify all uncaught exception and function
//signature should be void fun(int *ptr, int x) throw (int* , int)
//bad way to write
// void fun(int *ptr, int x)
// {
//     if(ptr == NULL)
//         throw ptr;
//     if(x == 0)
//         throw x;
//     //other functionality
// }

//better way
void fun(int *ptr, int x) throw (int *, int) // Dynamic Exception specification
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Some functionality */
}
 
int main()
{
    try {
       fun(NULL, 0);
    }
    catch(...) {
        cout << "Caught exception from fun()";
    }
    return 0;
}

int main()
{
    try
    {
        fun(NULL, 0);
    }
    catch(...)
    {
        cout<<"Caught exception from fun()\n";
    }
    return 0;
}