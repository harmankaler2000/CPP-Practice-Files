#include<iostream>
using namespace std;

//difference of exit and return
class Test
{
    public:
    Test()
    {
        cout<<"Inside const\n";
    }
    ~Test()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    //Test t1;
    //using exit 0
    //exit(0);
    //o/p:
    //Inside const
    //using return 0;
    //return 0;
    //o/p
    //Inside const
    //Inside Destructor
    

    //Incase of static the dest is called in any which way
    static Test t1;
    exit(0);
    //o/p
    //Inside const
    //Inside Destructor

    //return 0;
    //o/p
    //Inside const
    //Inside Destructor
}