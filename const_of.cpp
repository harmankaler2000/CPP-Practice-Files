#include<iostream>
using namespace std;

class Test
{
    int value;
    public:
    Test(int v = 0){value = v;}
    int getValue() const{return value;}
    int getValue_Non_const() {return value;}
};

int main()
{
    Test t(20);
    cout<<t.getValue();
    //gives error as non const function is being
    //called by const object
    //const Test t1;
    //cout<<t1.getValue_Non_const();
    return 0;
}