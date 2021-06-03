#include<iostream>
using namespace std;

void test(float s, float t)
{
    cout<<"Function with float called\n";
}

void test(int s, int t)
{
    cout<<"Function with int called\n";
}

int main()
{
    //will give an error as the prog does not have double
    //so it will not know to convert to float or to int
    //hence will cause ambiguity and compiler erro
    //test(3.5, 5.6);
    //hence use the floating point literal f so that there is no confusion
    test(3.5f, 5.6f);
    return 0;
}