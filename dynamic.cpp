#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;
    p = new(nothrow) int;
    if(!p)
        cout<<"Allocation failed\n";
    else
    {
        *p = 29;
        cout<<"Value of p: "<<*p<<endl;
    }
    float *r = new float(75.75);
    cout<<"Value of r: "<<*r<<endl;
    int n = 5;
    int *q = new(nothrow) int [n];
    if(!q)
        cout<<"allocation failed\n";
    else
    {
        for(int i = 0; i < n;i++)
        {
            q[i] = i + 1;
        }
        cout<<"Value store in block of mem: \n";
        for(int i = 0;i<n;i++)
            cout<<q[i]<<" ";
    }
    delete p;
    delete r;
    delete [] q;
    return 0;
}