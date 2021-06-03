#include<iostream>
#include<deque>
using namespace std;

void showdq(deque<int> d)
{
    deque<int>::iterator it;
    for(it= d.begin();it!=d.end();++it)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    d.push_front(15);
    cout<<"Deque is \n ";
    showdq(d);
    cout<<"size: "<<d.size()<<endl;
    cout<<"Max size: "<<d.max_size()<<endl;
    cout<<"at: "<<d.at(2)<<endl;
    cout<<"back: "<<d.back()<<endl;
    cout<<"Front: "<<d.front()<<endl;
    cout<<"pop back: "<<endl;
    d.pop_back();
    showdq(d);
    cout<<"pop front: "<<endl;
    d.pop_front();
    showdq(d);
    return 0;
}