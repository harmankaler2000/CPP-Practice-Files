#include<iostream>
using namespace std;

class student
{
    private:
    int roll;
    public:
    //constructor
    student(int r):roll(r) {}
    //a const function that changes roll with the help of const_cast
    void fun() const
    {
        (const_cast <student*> (this)) -> roll = 5;
    }
    int getRoll(){return roll;}
};

int fun1(int* ptr)
{
    return (*ptr + 10);
}

int fun2(int *ptr)
{
    *ptr = *ptr + 10;
    return (*ptr);
}


int main(void)
{
    student s(3);
    cout<<"Old roll number: "<<s.getRoll()<<endl;
    s.fun();
    cout<<"New roll number: "<<s.getRoll()<<endl;
    const int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast <int *> (ptr);
    cout<<fun1(ptr1);
    const int val = 10;
    const int *ptr2 = &val;
    int *ptr4 = const_cast <int *>(ptr2);
    fun2(ptr4);
    cout << val;
    int val1 = 10;
    const int *ptr3 = &val1;
    int *ptr5 = const_cast <int *>(ptr3);
    fun2(ptr5);
    cout << val;
    return 0;
}