#include<iostream>
using namespace std;

class Test
{
    public:
    int a;
    Test()
    {
        a = 10;
        cout<<"Constructor is executed\n";
    }
    ~Test()
    {
        cout<<"Destructor\n";
    }
}; 

void myfunc()
{
    //local static object
    static Test obj;
    //it will not be destroyed as it is static
    
    //if the object is not static it will be deleted after the scope of the function ends
    //Test obj;
}

//global static object
static Test obj1;

int main()
{
    cout<<"main starts\n";
    myfunc();
    cout<<obj1.a<<endl;
    cout<<"main ends\n";
    return 0;
}