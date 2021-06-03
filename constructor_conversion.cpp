#include<iostream>
using namespace std;

class Point
{
    int x, y;
    public:
    Point(int i = 0, int j = 0)
    {
        x = i;
        y = j;
    }

    void print()
    {
        cout<<"x = "<<x<<" , y = "<<y<<endl;
    }
};

int main()
{
    Point t(20, 30); //value to x and y assigned
    t.print();
    //value of t gets updates
    t = 30; //x is updated to 30 and y is set to 0 as no value is assigned
    t.print();
    return 0;
}