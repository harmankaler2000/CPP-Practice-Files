#include<iostream>
using namespace std;
/*
//function
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    cout<<"The cube is: "<<cube(3)<<"\n";
    return 0;
}
*/

//using class
class operation
{
    int a,b,add,sub,mul;
    float div;
    public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void operation::get()
{
    cout<<"\nEnter the first value: ";
    cin>>a;
    cout<<"\nEnter the second value: ";
    cin>>b;
}
inline void operation::sum()
{
    cout<<"\nAddition is: "<<a+b;
}
inline void operation::difference()
{
    cout<<"\nDifference is: "<<a-b;
}
inline void operation::product()
{
    cout<<"\nThe product is: "<<a*b;
}
inline void operation::division()
{
    cout<<"\ndivision is: "<<a/b;
}

int main()
{
    cout<<"Class using inline\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.division();
    s.product();
    return 0;
}