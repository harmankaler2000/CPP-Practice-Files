#include<iostream>
using namespace std;

class Point
{
    private:
    const int t; //const var
//int &z; //refrence var
    int x, y;
    public:
    //initalization of cost var using initialer list
    Point(int t, int i = 0, int j = 0) : t(t), x(i), y(j){}
    //this can be done inside the method as well
    int getX() const {return x;}
    int getY() const {return y;}
    int getT() const {return t;}
};

int main()
{
    Point t1(30, 10, 15);
    cout<<"x = "<<t1.getX()<<", y = "<<t1.getY()<<", t = "<<t1.getT();
    return 0;
}