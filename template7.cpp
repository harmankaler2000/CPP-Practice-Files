//class templates and static variables
//Each instantiation of class template has its own copy of member static variables
#include<iostream>
using namespace std;

template<class T> class Test
{
    private:
        T val;
    public:
        static int count;
        Test()
        {
            count++;
        }
};

template<class T> int Test<T>::count = 0;

int main()
{
    //value of count for Test<int> is 1
    Test<int> a;
    //value of count for Test<int> is 2
    Test<int> b;
    //value of count for Test<double> is 1
    Test<double> c;
    cout<<Test<int>::count<<endl; //2
    cout<<Test<double>::count<<endl; //1
    return 0;
}