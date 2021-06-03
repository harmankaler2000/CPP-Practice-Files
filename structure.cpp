#include<iostream>
using namespace std;

struct s
{
    int roll; //cannot do this with structure memeber in  C but can do in C++
    // int x = 0; cannot directly initialize them, this will raise an error:
    //COMPILER ERROR: cannot initialize members here
    int age;
    int marks;

    void print()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
}s1; //can do this

struct point
{
    int x  = 0;
    int y = 1;
    //in C++ this is considered as defaukt arg hence no error is raised
    //but that is not the case in c
    void print()
    {
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }
};

int main()
{
    //or use struct s p1;
    s1.roll = 1;
    s1.age = 10;
    s1.marks = 50;
    s1.print();

    struct point p1;
    p1.x = 10;
    p1.print();

    struct point p2 = {100, 200};
    //can also be initialized using:
    //struct Point p1 = {0, 1};
    p2.print();
}