#include<iostream>

namespace name1
{
    namespace name2
    {
        namespace name3
        {
            int var = 100;
        }
    }
}

//namespace aliasing
namespace alias = name1::name2::name3;

int main()
{
    std::cout<<alias::var<<"\n";
    return 0;
}