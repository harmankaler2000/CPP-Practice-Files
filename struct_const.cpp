#include<iostream>
using namespace std;

struct student
{
    int roll;
    student(int x)
    {
        roll = x;
        cout<<"roll is: "<<roll;
    }
};

int main()
{
    struct student stu(10);
}