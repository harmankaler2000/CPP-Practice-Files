//inline namespaces
#include<iostream>
using namespace std;

namespace n1
{
    inline namespace n2
    {
        int val = 10;
    }

    inline namespace n3
    {
        namespace n4
        {
            int var = 20;
        }
    }
    //above should be like this to access var
    inline namespace n5
    {
        inline namespace n6
        {
            int var1 = 1;
        }
    }
}

int main()
{
    cout<<n1::val;
    //n4 has to be inline to be access var 
    //directly by n1
    cout<<n1::n4::var;
    //now can access var1
    cout<<n1::var1;
    return 0;
}