#include<iostream>
using namespace std;

//always define your own copy or assignment operator
//when dealing with pointers

class Test
{
    int *ptr;
    public:
    Test(int i = 0)
    {
        ptr = new int(i);
    }

    void setVal (int i)
    {
        *ptr = i;
    }
    void print()
    {
        cout<<*ptr<<endl;
    }

    //solution is cretaing own = and copy const
    Test& operator = (const Test &t)
    {
        //should not be self assignment
        if(this != &t)
            *ptr = *(t.ptr);
        return *this;
    }
    
    Test(const Test &t)
    {
        ptr = new int;
        *ptr = *t.ptr;
    }
};

int main()
{
    Test t1(5);
    Test t2;
    //will update the value of t2 whenever t1 is 
    //updated as both point to same value all the time
    t2 = t1;
    t1.setVal(10);
    t1.print();
    t2.print();
    //even copy will do the same
    Test t3(5);
    Test t4(t3);
    t3.setVal(10);
    t3.print();
    t4.print();
    return 0;
}