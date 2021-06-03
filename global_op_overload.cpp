#include<iostream>
using namespace std;

class Complex{
    private:
    int real, imag;
    public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void print()
    {
        cout<<real<<" + i"<<imag<<"\n";
    }

    //global operator overloading using friend function
    //hence it can access private members
    friend Complex operator + (Complex const &, Complex const &);
};

//the global operator function is made friend of this class
//to access private members
Complex operator + (Complex const &c1, Complex const &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

