#include<iostream>
using namespace std;
//declaring the variable which is made extern an initial value can
//also be intialized to x
int x;

void autoStorageClass()
{
    cout<<"Demonstrating auto class \n";
    //declaring an auto variable as int a =32; works as well
    int a = 32;   
    //printing the auto variable 'a'
    cout<<"Value of the variable 'a' declared as auto "<<a<<endl;
}

void registerStorageClass()
{
    cout<<"Demonstrating register class: \n";
    //declaring register variable
    register char b = 'G';
    cout<<"Value using register is: "<<b<<endl;
}

void externStorageClass()
{
    cout<<"Demostrating extern class\n";
    extern int x;
    cout<<"Value of the variable extern is "<<x<<endl;
    x = 2;
    cout<<"Modified value of var x declared as extern is: "<<x<<endl;
}

void staticStorageClass()
{
    int i = 0;
    cout<<"Static class: \n";
    for(i = 1; i < 5; i++)
    {
        static int y = 5;
        int p = 10;
        y++;
        p++;
        cout<<"y is declared as static is "<<y<<" in loop: "<<i<<endl;
        cout<<"p is declared as non-static is "<<y<<" in loop: "<<i<<endl;
    }
}

int main()
{
    cout<<"Storage classes: \n";
    autoStorageClass();
    registerStorageClass();
    externStorageClass();
    staticStorageClass();
}