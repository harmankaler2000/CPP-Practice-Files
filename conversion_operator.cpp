#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
    private:
        double real;
        double imag;

    public:
        //default constructor
        Complex(double r = 0.0, double i = 0.0): real(r), imag(i)
        {}

        //magnitude using normal function
        double mag()
        {
            cout<<"using double mag()\n";
            return getMag();
        }

        //magnitude using conversion operator
        operator double()
        {
            cout<<"using operator double\n";
            return getMag();
        }

    private:
        //helper function for magnitude
        double getMag()
        {
            return sqrt(real * real + imag + imag);
        }
};

int main()
{
    //complex object
    Complex c(3.3, 4.5);

    //printing the magnitude
    cout<<c.mag()<<endl;
    //this can be done using
    //using double operator
    cout<<c<<endl;

    //or this:
    double c1 = c;
    cout<<"double is overloaded: "<<c1<<endl;
    return 0;
}