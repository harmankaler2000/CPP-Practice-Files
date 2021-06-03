#include<iostream>
using namespace std;

class enclosing
{
    private:
    int x = 10;

    //nested class
    public:
    class nested
    {
        int y = 20;
        public:
        void nested_func(enclosing *e)
        {
            cout<<y<<endl;
            cout<<e->x<<endl; //works as nested class can access the private function of parent class
        }
    };

    //this fails as y is private in nested
    // void enclosing_func(nested *n)
    // {
    //     member "enclosing::nested::y" (declared at line 13) is inaccessible
    //     cout<<n->y;
    // }
};

int main()
{
   enclosing::nested obj;
   enclosing e;
   obj.nested_func(&e);
}