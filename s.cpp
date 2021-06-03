#include<iostream>
using namespace std;
//empty structure
struct empty
{
};

int main()
{
    struct empty e;
    cout<<sizeof(e);
    return 0;
}