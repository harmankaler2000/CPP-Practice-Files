#include<iostream>
//including file with user defined namespace
#include "namespace10_2.h"
using namespace std;
int main()
{
    cout<<name::value();
    return 0;
}