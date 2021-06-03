#include<iostream>
using namespace std;

class Count
{
    private:
    int value;

    public:
    //constructor to initialize count to 5
    Count() : value(5){}

    //to get back a result change the void to Count
    //overload when ++ prefix is used
    Count operator ++ ()
    {
        Count temp;
        value += 100;
        temp.value = value;
        return temp;
    }

    //when used as postfix
    Count operator ++ (int) 
    {
        Count temp;
        value += 5;
        temp.value = value;
        return temp;
    }

    void display()
    {
        cout<<"Count: "<<value<<endl;
    }
};

int main()
{
    Count count1, result;
    //call the void operator ++() function
    result = ++count1;
    result.display();

    Count count2;
    //postfix
    result = count2++;
    result.display();


    return 0;
}