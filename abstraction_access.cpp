#include<iostream>
using namespace std;

//abstraction using access specifiers
class Abstraction
{
    //hiding the data
    private:
    int a, b;

    public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main()
{
    Abstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}