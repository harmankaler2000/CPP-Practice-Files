#include<iostream>
using namespace std;

namespace name_space
{
    //just declare the class
    class inside;
}

//defining class outside
class name_space::inside
{
    public:
        void display()
        {
            cout<<"ns::geek::display()\n";
        }
};

int main()
{
    name_space::inside obj;
    obj.display();
    return 0;
}