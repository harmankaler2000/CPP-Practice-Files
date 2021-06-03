#include<iostream>
using namespace std;

class base
{
    public:
    //compiler declares the constructor
};

class A
{
    public:
    //user defined constructor
    A()
    {
        cout<<"A constructor"<<endl;
    }
    //unitialized
    int size;
};

class B: public A
{
    //compiler defines default constructor of B and
    //inserts stub to call A const

    //compiler won't initialize any data of A
};

class C: public A
{
    public:
    C()
    {
        //user defined default constructor of C
        //compiler inserts stub to call A's const
        cout<<"C constructor"<<endl;
        //compiler won't initialize any data of A
    }
};

class D
{
    public:
    D()
    {
        // User defined default constructor of D
        // a - constructor to be called, compiler inserts
        // stub to call A constructor
        cout << "D Constructor" << endl;
        // compiler won't initialize any data of 'a'
    }
    private:
    A a;
};

//default constructor
class construct
{
    public:
    int a, b;
    //default constructor
    construct()
    {
        a = 10;
        b = 20;
    }
};


//parameterized constructor
class Point
{
    private:
    int x, y;
    public:
    //constructor overloading
    Point()
    {
        x = 0;
        y = 0;
    }

    //parameterized constructor
    Point(const Point &p1)
    {
        x = p1.x;
        y = p1.y;
    }

    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    //copy constructor
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
    //default param objects
    base ba;
    B b;
    C c;
    D d;
    construct cc;
    cout<<"a: "<<cc.a<<endl<<"b: "<<cc.b;

    //parameterized constructor
    Point p1(10, 15);
    //access values assigned by constructor
    cout<<"\np1.x= "<<p1.getX()<<" \np1.y = "<<p1.getY();
    
    //copy constructor:
    Point p2 = p1;
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

    //assignment vs copy constructor
    construct c1, c2;
    construct c3 = c1; //calls copy constructor
    c2 = c1; //calls assignment operator
    return 0;
}