#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list<int> g)
{
    list<int>::iterator it;
    for(it = g.begin();it!=g.end();++it)
        cout<<"\t"<<*it;
    cout<<"\n";
}

int main()
{
    list<int> g1,g2;
    for(int i=0;i<10;i++)
    {
        g1.push_back(i*2);
        g1.push_front(i*3);
    }
}