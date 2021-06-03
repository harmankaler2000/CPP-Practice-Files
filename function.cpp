#include<iostream>
using namespace std;

//max function
int max(int x, int y)
{
    if(x > y)
        return x;
    else
        return y;
}

int main(void)
{
    int a = 10, b = 20;
    int m = max(a, b);
    cout<<"max is: "<<m;
    return 0;
}