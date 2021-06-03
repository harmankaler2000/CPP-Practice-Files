#include<iostream>
using namespace std;

class construct
{
    private:
    int x, y;
    public:
    //parameterized constructor
    construct(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    construct c(10, 11);
    int resultx = c.getX();
    int resulty = c.getY();
    cout<<resultx<<" "<<resulty;
    return 0;
}