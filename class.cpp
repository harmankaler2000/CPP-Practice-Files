#include<iostream>
using namespace std;

class A
{
    //access modifier
    public:
    string st;
    //member function
    void printname()
    {
        cout<<"Name: "<<st;
    }

    //outside member function
    void outside();
};

//class member function outside it
void A::outside()
{
    cout<<"Member function outside\n";
}

int main()
{
    //declare the object of the class
    A a;
    //accessing data members
    a.st = "Harman";
    //accessing member function
    a.printname();
    return 0;
}