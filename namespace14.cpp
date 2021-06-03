//using diretive has the saame effect as inline
#include<iostream>
using namespace std;

namespace n1
{
    namespace n2
    {
        namespace n3
        {
            int var = 10;
        }
        using namespace n3;
    }
    //does the same job as inline
    using namespace n2;
}

int main()
{
    cout<<n1::var;
    return 0;
}