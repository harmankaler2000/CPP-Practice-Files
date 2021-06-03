//a class in a namespace
#include<iostream>
using namespace std;

namespace name_space
{
    class inside
    {
        public:
            void display()
            {
                cout<<"ns::inside::display()\n";
            }
    };
}

int main()
{
    //creaing object of inside class
    name_space::inside obj;
    obj.display();
    return 0;
}