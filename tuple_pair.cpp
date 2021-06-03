#include<iostream>
#include<tuple>
using namespace std;

tuple<int, int, char> foo(int n1, int n2)
{
    return make_tuple(n2, n1, 'a');
}

pair<int,int> foo1(int num1, int num2)
{
    return make_pair(num2,num1);
}

int main()
{
    int a,b;
    char cc;
    
    //unpack the element returned by foo
    tie(a,b,cc) = foo(5,10);

    //store values returned by foo1
    pair<int, int> p = foo1(5, 2);
    cout<<"Values returned by tuple: ";
    cout<<a<<" "<<b<<" "<<cc<<endl;

    cout<<"Values returned by Pair: ";
    cout<<p.first<<" "<<p.second;
    return 0;
}