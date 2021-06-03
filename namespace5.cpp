//defining methods outside the namespace
#include<iostream>
using namespace std;

namespace name_space
{
    void display();
    class inside
    {
        public:
            void display();
    };
}

void name_space::inside::display()
{
    cout<<"ns::inside::display()\n";
}
void name_space::display()
{
    cout<<"ns::display()\n";
}

int main()
{
    name_space::inside obj;
    name_space::display();
    obj.display();
    return 0;
}