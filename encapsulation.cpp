#include<iostream>
using namespace std;

class Encapsulation
{
    private:
    //data hidden from outside world
    int x;

    public:
    //function to set value of x
    void set(int a)
    {
        x = a;
    }

    //function to return value of variable x
    int get()
    {
        return x;
    }
};

int main()
{
    Encapsulation e;
    e.set(10);
    cout<<e.get();
    return 0;
}