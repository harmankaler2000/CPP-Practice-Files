#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0)
        {
            real = r;;
            imag = i;
        }

        friend ostream& operator << (ostream &out, const Complex&c);
        //complex cannot be const as we will change it to enter values
        friend istream& operator >> (istream &in, Complex&c);
};

ostream& operator << (ostream &out, const Complex &c)
{
    out<<c.real;
    out<<" +i"<<c.imag<<endl;
    return out;
}

istream& operator >> (istream &in, Complex& c)
{
    cout<<"Enter real part\n";
    in >>c.real;
    cout<<"Enter imaginary part\n";
    in>>c.imag;
    return in;
}

int main()
{
    Complex c1;
    cin>>c1;
    cout<<"The complex object is: ";
    cout<<c1;
    return 0;
}