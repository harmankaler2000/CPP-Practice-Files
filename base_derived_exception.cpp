#include<iostream>
using namespace std;

class Base{};
class Derived: public Base{};

//if base class catch is before derived then it will never be executed
/*

.\base_derived_exception.cpp: In function 'int main()':
.\base_derived_exception.cpp:19:5: warning: exception of type 'Derived' will be caught        
     catch(Derived d)
     ^~~~~
.\base_derived_exception.cpp:15:5: warning:    by earlier handler for 'Base'
     catch(Base b)
     ^~~~~
*/
int main()
{
    Derived d;
    try
    {
        throw d;
    }
    catch(Derived d)
    {
        //this is never executed if after base
        cout<<"Derived caught exception\n";
    }
    catch(Base b)
    {
        cout<<"Base exception\n";
    }
    return 0;
}