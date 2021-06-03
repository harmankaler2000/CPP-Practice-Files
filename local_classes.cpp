#include<iostream>
using namespace std;

//global variables
int z;

//local classes
void fun()
{
    
    //local class only has access to static and enum variables of enclosing function
    //not the non static variables
    int x = 10;
    static int y;
    enum a {i = 1, j = 2};

    //first local class
    class Test1
    {
        //static variables are not allowed in local classes
        //static int i;
        //static data member declaration is not allowed in this class
        //class local to fun
        //fine as the method is defined inside the local class

        public:
        //static methods are allowed
        static void method()
        {
            //this can have local static variables
            cout<<"Local class Test1::method()"<<endl;
            cout<<"static: "<<y<<endl;
            cout<<"enum: "<<i<<endl; //cout<<a is not allowed
            //cout<<"non static: "<<x<<endl;
            //error: reference to local variable of enclosing function is not allowed
        }
    };

    //second local class
    class Test2
    {
        //fine as local class can access another local class
        Test1 t1;
        public:
        void method()
        {
            //can access global variables
            cout<<"z = "<<z<<endl;
        }
    };

    Test2 t2;
    t2.method();

    //both works fine
    Test1 t;
    Test1 *tp;

    t.method();
    tp->method();

    // this does not work as the method should be defined inside the class
    // void Test::method()
    // {
    //     cout<<"Local class method()"<<endl;
    // }
    //gives the following error
    //Compiler Error:
    //  In function 'void fun()':
    //  error: a function-definition is not allowed here before '{' token
}

int main()
{
    fun();
    return 0;
}