#include<iostream>
using namespace std;

class Demo
{
    int value;
    public:
    Demo(int v = 0) {value = v;}
    void showMessage()
    {
        cout<<"Hi I am not const! :)\n";
    }
    void display() const
    {
        cout<<"Hi I am const!:>\n";
    }
};

int main()
{
    //constant object are initialized at the time
    //of declaration using constructor
    const Demo d1;
    d1.display();
    //error as non const tries to acces const function
    //d1.showMessage();
    return 0;
}